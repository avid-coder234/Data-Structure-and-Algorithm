
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

//OPTIMAL SOLUTION 2 - Shell Sorting

void swapGreater(long long arr1[],long long arr2[],int ind1,int ind2){
    if(arr1[ind1] > arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
void merge(long long arr1[],long long arr2[],int n,int m){

    int len = n + m;
    int gap = (len / 2) + (len % 2);

    while(gap > 0){
        int left = 0;
        int right = left + gap;

        while(right < len){
            // yaha pe left arr1 pe hai aur right arr2 pe 
            if(left < n && right >= n){
                swapGreater(arr1,arr2,left,right - n)
            }
            //yaha pe dono left aur right arr2 pe hai 
            else if(left >= n){
                swapGreater(arr2,arr2,left - n,right - n)
            }
            //yaha pe dono left aur right arr1 pe hai
            else{
                swapGreater(arr1,arr1,left,right)
            }
            left++;
            right++;
        }
        if(gap == 1)break;
        gap = (gap / 2) + (gap % 2);
    }
}