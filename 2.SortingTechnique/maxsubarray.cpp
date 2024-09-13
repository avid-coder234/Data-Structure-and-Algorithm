#include<bits/stdc++.h>
#include<vector>
using namespace std;

/*int bruteforceSubarray(vector<int> v){
    int n = v.size() - 1;
    int maxi = INT_MIN;
    for(int i = 0 ; i< n ; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += v[j];
        }
        maxi = max(maxi,sum);
    }
    return maxi;
}

long long kadane(vector<int> v){
    long long maxi = INT_MIN;
    long long sum = 0;
    int n = v.size() - 1;

    for(int i = 0; i < n ; i++){
        sum += v[i];
        if(sum > maxi){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

void merge(vector<int> &v,int low,int mid,int high){

    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <=high){
        if(v[left] <= v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        v[i] = temp[i - low];
    }
}
void mergesort(vector<int> &v,int low,int high){
    if(low >= high)return;
    int mid = (low + high)/2;

    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
}*/

int partition(vector<int> &v,int low,int high){
    int pivot = v[high];

    int i = low - 1;

    for(int j = 0;j <= high - 1; j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i + 1],v[high]);
    return i+1;
}
void quicksort(vector<int> v,int low,int high){
    if(low < high){

        int pi = partition(v,low,high);

        quicksort(v,low,pi - 1);
        quicksort(v,pi+1,high);
    }
}

int main(){
    vector<int> v = {10, 7, 8, 9, -1, 5};

    int n = v.size();
    quicksort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}