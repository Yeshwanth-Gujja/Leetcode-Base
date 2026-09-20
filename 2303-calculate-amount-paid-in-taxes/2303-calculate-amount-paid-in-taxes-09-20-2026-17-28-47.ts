function calculateTax(brackets: number[][], income: number): number {
    let i = 0;
    let window = 0;
    let result = 0;
    while (i < brackets.length - 1 && income > brackets[i][0]) {
        result += (brackets[i][0] - window) *
                  Math.round((brackets[i][1] / 100) * 100000) / 100000;

        window = brackets[i][0];
        i += 1;
    }
    window = income - window;

    result += window *
              Math.round((brackets[i][1] / 100) * 100000) / 100000;

    return result;
};