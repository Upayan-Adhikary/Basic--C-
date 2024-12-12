#include<iostream>

using namespace std;
int main()
{
    int n;
    int Ld, rev = 0;

    cout<<"Enter any number ";
    cin >> n;
    int copy = n;

    while(n != 0)
    {   
        // Checking for overflow and underflow
        if(rev > INT32_MAX / 10 || rev < INT32_MIN / 10){
        cout<<"Not possible to reverse the given number"; 
        return 0;
        }

        Ld = n % 10;
        rev = rev * 10 + Ld;
        n = n / 10;
    }
    cout << "The reversed number " << rev;
    cout << endl;

    if(rev == copy)
    cout << copy << " Is Palindrome";
    else
    cout << copy << " Not Palindrome";

}