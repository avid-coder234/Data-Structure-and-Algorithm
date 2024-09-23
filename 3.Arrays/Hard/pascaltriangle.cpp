// to calculate the ncr
// when question is asked about to find the element at row and column
// return the ans as n-1 C r - 1;
int ncr(int n,int r){
    int res = 1;
    for(int i = 0 ; i < r ; i++){
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
// when question is asked to print the row

int ans = 1;

for(int i = 1 ; i < n ; i++ ){

    ans = ans * (n - i);
    ans = ans / (i);
    cout<<ans;
}

class Solution {
public:
    vector<int> generaterow(int row){
        vector<int> newrow;
        long long ans = 1;
        newrow.push_back(1);

        for(int col = 1 ; col < row ; col++){
            ans = ans * (row - col);
            ans = ans / (col);
            newrow.push_back(ans);
        }
        return newrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;

        for(int i = 1 ; i <= numRows ; i++){
            matrix.push_back(generaterow(i));
        }
        return matrix;
    }
};
