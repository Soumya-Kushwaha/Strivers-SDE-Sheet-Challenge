#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = INT_MAX, maxProfit = 0;

    for (int i=0; i<prices.size(); i++){
        mini = min(mini, prices[i]);
        int diff = prices[i] - mini;
        maxProfit = max(maxProfit, diff);
    }
    return maxProfit;
    // Write your code here.
}
