#include<iostream>
#include<map>

using namespace std;
int main()
{
    // Array input and hash array initialization using 1 indexing
    cout << "Enter the array size  ";
    int n;
    cin >>  n;

    int arr[n];
    int hash[n];
    for(int i = 1; i<=n; i++)
    {
        cin >> arr[i];
        hash[i]  = 0;
         
    }

    // Precompute
    for(int j=1; j<=n; j++)
    {
        hash[arr[j]]++;
    }

    // Printing hash
    cout << "hashed values";
    for(int k=1; k<=n; k++)
    {
       cout << hash[k] << " ";
    }
/* 
Here the indexing for the arrays are starting from 1 and goes till N
But since the loop are controlled by me and I am consiously avoiding the 0th index I get no  undefined behaviour during Output
Test inputs : [2, 3, 2, 3, 5]    [3, 3, 3, 3]   [1]
*/     
}

