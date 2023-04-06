class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        for(int i=0;i<n;i++){
            if(i==0 && arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            else if(i==1 && arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            else if(i>=2 && i%2==0 && arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
            else if(i>=2 && i%2!=0 && arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
};