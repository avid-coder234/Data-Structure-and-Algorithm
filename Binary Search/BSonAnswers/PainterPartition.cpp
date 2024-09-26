int countPainter(vector<int> &boards,int paint){
    int time = 1;
    int paintCount = 0;
    int n = boards.size();

    for(int i = 0 ; i < n ; i++){
        if(paintCount + boards[i] <= paint){
            paintCount += boards[i];
        }else{
            time += 1;
            paintCount = boards[i];
        }
    }
    return time;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);

    while(low <= high){
        int mid = (low + high) / 2;

        int ans = countPainter(boards,mid);

        if(ans > k){
            low = mid + 1; 
        }
        else{
            high = mid - 1;
        }

    }
    return low;
}