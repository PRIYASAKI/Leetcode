class Solution {
    public int minBitFlips(int start, int goal) {
        int xor=start^goal;
        int a=0;
        while(xor!=0)
        {
          a+=xor & 1;
          xor >>=1;
        }
        return a;
    }
}