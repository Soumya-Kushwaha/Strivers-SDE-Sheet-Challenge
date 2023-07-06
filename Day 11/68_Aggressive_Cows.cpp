bool helper(vector<int> &stalls, int cows, int dist){
    int cowsCount = 1, lastPlacedCow = stalls[0];
    for (int i=1; i<stalls.size(); i++){
        if (stalls[i] - lastPlacedCow >= dist){
            cowsCount++;
            if (cowsCount == cows)
                return true;
            lastPlacedCow = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int low = 1, high = stalls[n-1] - stalls[0];

    while (low <= high){
        int mid = low + (high - low)/2;
        if (helper(stalls, k, mid) == true)
            low = mid + 1;
        else high = mid - 1;
    }
    return high;
}
