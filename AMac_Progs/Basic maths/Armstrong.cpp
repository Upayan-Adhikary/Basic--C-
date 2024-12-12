/* For any number if the addition of the cube of each digits yields the orginal number then the number is an 
Armstrong number */

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter any number ";
    cin >> n;
    int copy = n;
    int Ld, cube, num = 0;

        if(n > INT32_MAX / 10 || n < INT32_MIN / 10){
        cout<<"Not possible to reverse the given number"; 
        return 0;
        }

    while(n != 0)
    {

        Ld = n % 10;
        cube = (int)(pow(Ld, 3));
        num += cube;
        n = n / 10;

    }

    cout << " addtion of cubed digits = " << num;
    cout << endl;

    if(copy == num)
    cout << copy << " Armstrong number ";
    else
    cout << copy << " Not Armstrong number ";
}