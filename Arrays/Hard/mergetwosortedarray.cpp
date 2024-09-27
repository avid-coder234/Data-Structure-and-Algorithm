
//OPTIMAL SOLUTION
/*
1.Isme arr1 ka last element ko liya aur arr2 k phele element ko liya 
2.Ab compare k swap kiya at the end me fir dono array ko sort kr diya 
*/
void merge(long long arr1[],long long arr2[],int n,int m){

    int left = n - 1;
    int right = 0; 

    while(left >= 0 && right < m){
        if(arr1[left] >= arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
        sort(arr1,arr1 + n);
        sort(arr2,arr2 + m);
    }
}