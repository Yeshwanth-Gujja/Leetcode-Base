int passThePillow(int n, int time) {
    int direction = time/(n-1);
    int position = time%(n-1);
    return direction%2==0 ? position+1 : n-position;
}