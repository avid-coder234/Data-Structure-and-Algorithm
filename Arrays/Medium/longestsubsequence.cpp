// Brute force solution 
// TC O(n^2);
// SC O(1);

bool linear(vector<int>&a,int key){
    int n = a.size();
    for(int i = 0;i < n;i++){
        if(a[i] == key)
        return true;
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    int longest = 0;
    int n = a.size();

    for(int i = 0;i < n;i++){
        int x = a[i];
        int count = 1;
        while(linear(a,x+1)==true){
            x = x + 1;
            count++;
        }
        longest = max(longest,count);
    }
    return longest;
}

//BETTER 


int longestSuccessiveElements(vector<int>&a) {
    int longest = 1;
    int n = a.size();
    if(n == 0)return 0;
    sort(a.begin(),a.end());
    int lastSmaller = INT_MIN;
    int count = 0;

    for(int i = 0;i < n;i++){
        if(a[i] - 1 == lastSmaller){
            count += 1;
            lastSmaller = a[i];
        }
        else if (lastSmaller != a[i]){
            count = 1;
            lastSmaller = a[i];
        }
        longest = max(longest,count);

    }
    return longest;
}
