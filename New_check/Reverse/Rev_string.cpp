#include<iostream>
#include<string>
// Reverse a string
using namespace std;

int main()
{
    string s = "madammadammadam";
    // cout <<  "Enter a string" << endl;
    // getline(cin, s);

    string s2 = s;
    int len = s.size() - 1;
    for(int i = 0; i <= len ; i++)
    {
        char temp = s[len - i];
        s2[i] = temp;
    }

    int s_len = s.size();
    int s2_len = s2.size();
    cout << "Size of s = " << s_len << "  " << "Size of s2 = " << s2_len << endl;
    cout << "len = " << len << endl;
    cout  << s2 << endl;
    cout << s << endl;

    if((s.compare(s2)) == 0)
    cout  << "True";
    else
    cout << "false";
}