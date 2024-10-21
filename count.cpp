#include<iostream>

using namespace std;

void main()
{
    int n = 221;
    int last_digit;
    int rev = 0;

    int count = (int)(log10(n) + 1);   // another option of counting the number of digits without using loops
    cout << "The number of digits in n = " << count;
    cout << endl;
    while(n>0)
    {
        last_digit = n%10;
        n = n/10;

        rev = rev * 10 + last_digit;
        cout << last_digit;
    }

    cout << endl;
    cout << rev;
}