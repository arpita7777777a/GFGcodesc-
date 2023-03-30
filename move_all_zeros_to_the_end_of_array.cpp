class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
		 int i = 0, j = 0;

    // Move all non-zero elements to the front of the array
    while (i < n) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
        i++;
    }

    // Fill the remaining elements with zeros
    while (j < n) {
        arr[j] = 0;
        j++;
    }
}

	}
};
