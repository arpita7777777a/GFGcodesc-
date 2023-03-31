#include <iostream>

using namespace std;

int main()
{
        //-----------right rotaion-----------------
    int n2=6;
    int arr[n2] = {1,2,4,6,9,11};
    int k =3;
    int j;
    for(int i = 0,j = n2-k-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=n2-k,j= n2-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0, j=n2-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for(int i=0;i<n2;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

