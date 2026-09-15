function mostWordsFound(sentences: string[]): number {
    let max = 0;
    for (let i = 0; i < sentences.length; i++)
    {
        let count = 1;
        for (let j = 0; j < sentences[i].length; j++)
        {
            if (sentences[i][j] == ' ')
                count++;
        }
        if (count > max)
            max = count;
    }
    return max;
};