function canAliceWin(n: number): boolean {
    let repitation = 10;
    let alice_winner = false;
    while(n>=repitation){
        n -= repitation;
        alice_winner = !(alice_winner);
        repitation--;
    }
    return alice_winner;
};