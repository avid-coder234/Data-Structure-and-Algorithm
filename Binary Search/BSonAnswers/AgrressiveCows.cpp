#include<bits/stdc++.h>

bool canWePlace(vector<int> &stalls,int dist,int cows){
    int countCows = 1;
    int last = stalls[0];

    for(int i = 1 ; i < stalls.size() ; i++){

        if(stalls[i] - last >= dist){
            countCows++;
            last = stalls[i];
        }
        if(countCows >= cows) return true;
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int low = 0;
    int n = stalls.size();
    int high = stalls[n-1] - stalls[0];

    while(low <= high){
        int mid = (low + high) / 2;

        if(canWePlace(stalls,mid,k) == true){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;

}