function trimTrailingVowels(s: string): string {
    let i = s.length - 1;
    while(i>=0 && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')){
        i--;
    }
    return s.substr(0, i + 1);
};