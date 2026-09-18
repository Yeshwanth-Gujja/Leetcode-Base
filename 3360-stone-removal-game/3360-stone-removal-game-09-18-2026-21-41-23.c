bool canAliceWin(int n) {
    int repitation = 10;
    bool alice_winner = false;
    while(n>=repitation){
        n -= repitation;
        alice_winner = !(alice_winner);
        repitation--;
    }
    return alice_winner;
}