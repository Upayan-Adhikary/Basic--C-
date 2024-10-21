/*Adam number problem description -- 
A number when squared, reversed, its square root is found and is reversed again is equal to the original number, then it is called an Adam number.
Example:- 12,0=]]]

Use pointers to display the content and address of the orignial number and the after operation number*/

#include<iostream>
#include<math.h>

using namespace std;
void main() {
    int i, rev = 0, rev2 = 0;
    int *p = &i;
    cout<<"Enter any number ";
    cin>>i; 

        int sq = pow(i,2); //storing the square of the original digit
        int *q = &sq;      //storing the squared number in a different pointer

        //First loop for reversing digits
        while(*q > 0){
            rev = rev*10 + (*q%10);
            *q = *q/10;
            
        }
            rev = sqrt(rev); //Finding the square root
            
            //Second loop for reversing digits
            while(rev > 0){
            rev2 = rev2*10 + (rev%10);
            rev= rev/10;
            
        }
            q = &rev2; //making the same pointer p point to a different variable within the same program
            
        cout<<"The original number and it's address "<<*p<<' '<<p<<endl;
        cout<<"The operated number and it's address "<<*q<<' '<<q;

        //The check is easy with an if else leaving it here since the logic is correct for unsigned inputs


}


