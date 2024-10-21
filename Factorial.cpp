#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
#include <iostream>

using namespace std;

int main ()
{   
    unsigned long long n;  //The data type is not GOOD because for factorial of 100 it is returning 0. No other data type are there that goes beyond this one's range!!
                           //unsigned long long       8 Bytes	 Range (0 to 18,446,744,073,709,551,615)

    unsigned long long int req = 1;

    
    
    cout<<"Enter the value for n: ";
    cin>>n;
    cout << endl;

    // Inefficient LOOP factorial calculation greater than 65
    for(int i=n;i>=1;i--){
        req=req*i;
    }
    cout<<req;
}
