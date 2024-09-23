#include<iostream>
#include<maths.h>
#include<vector>
using namespace std;

void prime(int n)
{
    vector<int> ans;
    int count = 0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n % i == 0)
        {
            count+=1;
            if(i != n/i)
            {
                count+=1;
            }
        }
    }
    if(count == 2)cout<<"prime hai";


}
void divisor(int n)
{
    /*for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            cout<<i<<endl;
        }
    }*/
    void printDivisors(int N) {
    vector<int> divisors;
    
    // Iterate from 1 to sqrt(N)
    for (int i = 1; i <= sqrt(N); ++i) {
        if (N % i == 0) { // If i is a divisor of N
            divisors.push_back(i); // Add i to the list of divisors
            if (i != N / i) { // To avoid adding the square root twice if N is a perfect square
                divisors.push_back(N / i); // Add the corresponding divisor
            }
        }
    }
    
    // Sort the divisors in ascending order
    sort(divisors.begin(), divisors.end());
    
    // Print the divisors
    cout << "The divisors of " << N << " are:";
    for (int divisor : divisors) {
        cout << " " << divisor;
    }
    cout << endl;
}

}
int main()
{
    divisor(36);
    return 0;
}