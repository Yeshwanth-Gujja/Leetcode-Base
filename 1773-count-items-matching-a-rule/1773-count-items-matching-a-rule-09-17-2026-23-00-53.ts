function countMatches(
    items: string[][],
    ruleKey: string,
    ruleValue: string
): number {
    const index = ruleKey === "type" ? 0 : ruleKey === "color" ? 1 : 2;
    let count = 0;

    for (const item of items) {
        if (item[index] === ruleValue)
            count++;
    }

    return count;
}