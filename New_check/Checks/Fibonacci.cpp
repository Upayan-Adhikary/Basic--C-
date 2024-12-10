// Fibonacci number for Inputted value n
// 1,1,2,3,5,8,13
// Use Recursion, currently we have solved using brute force
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.

#include<iostream>
using namespace std;

int Fibo(int n)
{
  int a = 0;
  int b = 1;
  int temp;

  if(n == 0)
  return 0;  
  else if(n == 1)
  return 1;
  else
  {
    // SOLVE using recursion
    
    // for(int i = 2; i <=n; i++)
    // {
    //   temp = a + b;
    //   a = b;
    //   b = temp;
    // }
    // return temp;
  }
}

int main()
{
    int n;
    cout <<" Enter the number n " ;
    cin >> n;

    auto x = Fibo(n);
    cout << "The fibo number at " << n << " = " << x;
}