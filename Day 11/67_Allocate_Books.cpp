int helper(vector<int>& arr, int pages){
    int students = 1, currPages = 0;
    for (int i=0; i<arr.size(); i++){
        if (currPages + arr[i] > pages){
            students++;
            currPages = arr[i];
        }
        else currPages += arr[i];
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    if (n < m)
        return -1;

    int low = INT_MIN, high = 0;
    for (int i=0; i<n; i++){
        low = max(low, arr[i]);
        high += arr[i];
    }

    while (low <= high){
        int mid = low + (high - low)/2;
        int students = helper(arr, mid);
        if (students > m)
            low = mid + 1;
        else high = mid - 1;
    }
    return low;
    // Write your code here.
}
