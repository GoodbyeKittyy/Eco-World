const fs = require('fs');

async function updateReadme() {
    const STATE_FILE = '.commit_state.json';
    const today = new Date().toISOString().slice(0, 10); // "YYYY-MM-DD"

    // Load or initialise state
    let state = { date: '', target: 0, count: 0 };
    if (fs.existsSync(STATE_FILE)) {
        try {
            state = JSON.parse(fs.readFileSync(STATE_FILE, 'utf8'));
        } catch (_) {}
    }

    // New day → roll a fresh target between 2 and 10
    if (state.date !== today) {
        state.date   = today;
        state.target = Math.floor(Math.random() * 9) + 2; // 2–10
        state.count  = 0;
        console.log(`New day! Target commits today: ${state.target}`);
    }

    // Already hit today's target → skip
    if (state.count >= state.target) {
        console.log(`Already at ${state.count}/${state.target} commits today. Skipping.`);
        fs.writeFileSync(STATE_FILE, JSON.stringify(state));
        // Signal to the workflow that no commit is needed
        if (process.env.GITHUB_OUTPUT) {
            fs.appendFileSync(process.env.GITHUB_OUTPUT, 'should_commit=false\n');
        }
        return;
    }

    // Fetch a quote and append to quotes.txt
    let line = ` \r\n`;
    try {
        const response = await fetch("https://zenquotes.io/api/random");
        const data = await response.json();
        line = `Quote on |${new Date().toUTCString()}| : `;
        if (response.ok && Array.isArray(data) && data.length > 0) {
            line += ` ${data[0]["q"]} - ${data[0]["a"]}`;
        } else {
            throw new Error('response not OK');
        }
    } catch (_) {
        line += `Fetching failed`;
    }
    line += "\r\n";

    fs.appendFileSync('quotes.txt', line);
    console.log(`Appended quote (${state.count + 1}/${state.target})`);

    // Increment counter and save state
    state.count += 1;
    fs.writeFileSync(STATE_FILE, JSON.stringify(state));

    // Signal to the workflow that a commit should happen
    if (process.env.GITHUB_OUTPUT) {
        fs.appendFileSync(process.env.GITHUB_OUTPUT, 'should_commit=true\n');
    }
}

updateReadme();
