double calculateTax(int** brackets, int bracketsSize, int* bracketsColSize, int income) {
    int i = 0;
    int window = 0;
    double result = 0;
    while(income>brackets[i][0]){
        result += (brackets[i][0] - window)*round((brackets[i][1] / 100.0) * 100000) / 100000.0;
        window = brackets[i][0];
        i+=1;
    }
    window = income-window;
    result += window*round((brackets[i][1] / 100.0) * 100000) / 100000.0;
    return result;
}