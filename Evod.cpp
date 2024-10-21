// For any given number sum it's digits and check for even and odd condition, use pointer to store and perform all operations

#include<iostream>

using namespace std;

void main() {
    int i, sum = 0;
    int *p = &i;
    cout<< "Enter a number ";
    cin >> i;

        if(i == 0)
        cout<<"Number is 0";

        else {
        if(*p/10 == 0) 
            {
                if(*p%2 == 0)
                cout<<"The single digit number is even "<< *p;
                else
                cout<<"The single digit number is odd "<< *p;

        }
        else 
            {
                
                while(*p > 0){
                    
                    sum += *p%10; 
                    *p = *p/10;
                }

                if(sum%2 == 0)
                cout<<"The summed number is even "<< sum;
                else
                cout<<"The summed number is odd "<< sum;

        } 
        }       
}