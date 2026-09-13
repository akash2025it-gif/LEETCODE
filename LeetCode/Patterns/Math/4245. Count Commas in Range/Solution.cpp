class Solution {
public:
    int countCommas(int n) {
       int ans=0;
       int start=1000;
       int comma=1;
    while(start<=n)
    {
        int end=min(n,start*1000-1);
        ans+=(end-start+1)*comma;
        start*=1000;
        comma++;
    }
    return ans;
    }
};