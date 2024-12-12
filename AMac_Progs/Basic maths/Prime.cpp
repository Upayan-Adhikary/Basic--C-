// Check is a number is prime - (Prime numbers have two factors 1 and itself)


#include<iostream>

using namespace std;

auto Prime_Check(int N)
{
    vector<int> v;
    for(int i = 2; i <= N; i++)  // This loop can be optimised to run sqrt(N) times, just need a few tweaks in the entire code hence avoided manipulation!
    {
        if(N % i == 0)
        v.push_back(i);
    }

    int len = v.size();
    if(len == 1 && v[0] == N)
    cout << N << " Is a Prime number";
    else
    cout << N << " Is not a Prime number";

}


int main()
{
    int n;
    cout << "Enter a number for prime check ";
    cin >> n;

    if(n == 1)
    {
        cout << n << " Is not a prime number";
        return 0;
    }

    else if(n <= 0)
    {
        cout << " Negative number and 0 are not PRIME";
        return 0;
    }

    Prime_Check(n);

}