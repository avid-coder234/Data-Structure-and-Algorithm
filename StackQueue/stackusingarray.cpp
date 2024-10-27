
class stackImp{
    int size = 5;
    int top = -1;
    int arr[5];

    void push(int x){
        if(top == size - 1){
            cout<<"Bhara hua hai badwe";
        }
        else{
            top++;
            arr[top] = x;
        }
    }

    int pop(){
        int ans;
        if(top == -1){
            return top;
        }
        else{
            ans = arr[top];
            top--;
        }
        return ans;
    }
}