class Solution {
public:
int solve(int a, int b, int c) {
      int maxi = max({a,b,c});
      int sum = a+b+c+1;
      sum-=maxi;
      if(maxi>2*sum){
          return -1;
      }
      else{
          return a+b+c;
      }
    }
};