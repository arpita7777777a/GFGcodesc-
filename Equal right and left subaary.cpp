int equalSum(int N, vector<int> &A) {
        // code here
        int sum1=0;
        int sum2=0;
        for(int i= 0;i<N;i++){
             sum2 += A[i];
        }
        for(int i=0;i<N;i++){
            sum2 -= A[i];
            if(sum1==sum2){
                return i+1;
            }
             sum1 += A[i];
        }
        return -1;
    }