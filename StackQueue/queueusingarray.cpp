class queImp{
    int size = 10;
    int arr[10];
    int currSize = 0;
    int start,end = -1;

    void push(int x){
        if(currSize == size){
            cout<<"Queue is full";
        }
        if(currSize == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end + 1) % size;
            arr[end] = x;
            currSize += 1;
        }
    }

    void pop()
}