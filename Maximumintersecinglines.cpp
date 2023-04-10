class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
          vector<int> v1;
        vector<int> v2;
        int cnt =0;
        for(int i =0;i<N;i++){
            v1.push_back(lines[i][0]);
            v2.push_back(lines[i][1]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int i = 0 , j = 0;
        int ans = 0;
        while(i<N){
            if(v1[i]<=v2[j]){
                cnt++,i++;
                ans= max(ans,cnt);
            }
            else
                cnt--,j++;
        }
        return ans;
    }
};