// For any given number print all of its divisors
#include<iostream>

using namespace std;

auto Solution_1(int N)
{
        
    vector<int>v;
    for(int i = 1; i <= sqrt(N); i++)
    {
        if(N % i == 0)
        {
            
            v.push_back(i);

            if(N / i != i)
            v.push_back(N/i);
        }
    }

    sort(v.begin(), v.end());

    cout << "The divisors for " << N << " are = ";
    for(auto a : v)
    {
        cout << a << ", ";
    }

}

auto Solution_2(int N)
{
    int i = 1;
    cout << "The divisors for " << N << " are = ";
    for(i = 1; i <= N; i++)
    {
        if(N % i == 0) {
        cout << i << ", ";
        }
    }
}

    int main()
    {
        int n;
        cout <<"Enter any number to find out it's divisors ";
        cin >> n;

        if(n < 0)
        {
            cout << " Negative number ";
            return 0;
        }

        Solution_1(n);

        cout << endl;

        Solution_2(n);

        
    }