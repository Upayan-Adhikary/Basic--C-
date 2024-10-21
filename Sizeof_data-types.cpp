// Refer to this website for the ranges of different data types as set by the compiler MSVC 
// https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170

#include <iostream>

using namespace std;
void main()
{
    int x;
    char y;
    float f;
    double d;
    wchar_t a;

        cout<<"value of integer "<<sizeof(x) <<endl;
        cout<<"value of character "<<sizeof(y)<<endl;
        cout<<"value of floating point "<<sizeof(f)<<endl;
        cout<<"value of double "<<sizeof(d)<<endl;
        cout<<"value of wide_char "<<sizeof(a)<<endl;

}