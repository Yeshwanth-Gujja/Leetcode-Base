class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = abs(x-z);
        int b = abs(z-y);
        return (a-b<0)?1:((a-b==0)?0:2);
    }
};