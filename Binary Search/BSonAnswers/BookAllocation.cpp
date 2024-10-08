#include<bits/stdc++.h>
int countStudent(vector<int> &arr,int pages){
    int students = 0;
    long long pageStudent = 0;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] + pageStudent <= pages){
            pageStudent += arr[i];
        }else{
            students+=1;
            pageStudent = arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m > n)return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);

    while(low <= high){
        int mid = (low + high)/2;

        int student = countStudent(arr,mid);
        if(student > m){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}