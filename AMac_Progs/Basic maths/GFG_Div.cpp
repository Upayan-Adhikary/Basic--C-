/*Link to the problem statement
https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1   */

#include<iostream>

using namespace std;

auto Solution_1(int N)
{
    int sum = 0;
    for(int i = 1; i <= N; i++)
    {
        sum += (N/i)*i;
    }

    return sum;
}


auto Solution_2(int N)
{
    int sum = 0;
    int t;

    while(N> 0)
    {
        for(int i = 1; i*i <= N; i++)
        {
            if(N % i == 0)
            {
                sum += i;

                if(N/i != i)
                {
                    t = N/i;
                    sum += t;
                }

            }
        }

        N = N - 1;
    }

    return sum;
}

    int main()
    {     
        int n;
        cout << "Enter any number ";
        cin >> n;


        auto x = Solution_1(n); // Efficient funtion to solve this problem
        cout << "The output for GFG prob " << x;

        cout << endl;

        auto x2 = Solution_2(n);
        cout << "The output for GFG prob " << x2;
    }