#include<iostream>

using namespace std;
int main()
{

int n ;
int Ld, rev = 0, count = 0;
int count2 = 0;

cout << "Enter the number " ;
cin >> n;
cout << endl;


//we can use the below algorithm as an non loop alternative to count the number of digits
count = (int)(log10(n) + 1); 


while(n != 0)
{
    Ld = n % 10;
    rev = rev * 10 + Ld;
    n = n / 10;
    count2 ++; // Counting the number of digits inside the loop
}
 

cout << "Reversed Number " << rev << endl;
cout << "Count = " << count << " Count2 = " << count2;

}