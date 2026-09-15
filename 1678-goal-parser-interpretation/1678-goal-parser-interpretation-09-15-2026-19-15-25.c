char* interpret(char* command) {
    int n = strlen(command);
    char* goalparser = malloc((n + 1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (i < n) {
        if (command[i] == 'G') {
            goalparser[j] = 'G';
            j++;
            i++;
        }
        else if (command[i] == '(' && command[i + 1] == ')') {
            goalparser[j] = 'o';
            j++;
            i += 2;
        }
        else {
            goalparser[j] = 'a';
            j++;
            goalparser[j] = 'l';
            j++;
            i += 4;
        }
    }
    goalparser[j] = '\0';
    return goalparser;
}