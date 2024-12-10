// Problem statement https://leetcode.com/problems/valid-palindrome/description/
// Input: s = "A man, a plan, a canal: Panama"       Output: s = "amanaplanacanalpanama"  explanation: "palindrome"
// Input: s = " "    
// Output: s is an empty string "" after removing non-alphanumeric characters.Since an empty string reads the same forward and backward, it is a palindrome.
// Input: "0P"  Output: "P0"  explanation: "Not palindrome"
// Alpha numeric are (a-z, A-Z, 0-9) unless exclusively stated otherwise
// The best solution has been submitted on the leetcode problem link, the 2nd best solution is palindrome_2.cpp

#include<iostream>
#include<string>
using namespace std;

void reversal_Check(string s1)
{
    string s2 = s1;
    int len = s1.size()  - 1;
    for(int i = 0; i <= len; i++)
    {
        char temp = s1[len - i];
        s2[i] = temp;
    }

    cout << "REVERSED STRING  " << s2 << endl;

    //Check for Palindrome  (Failing here printing incorrect condition)
    if((s1.compare(s2)) == 0)
    cout << "PALINDROME" << endl;
    else
    cout << "NOT PALINDROME" << endl;

    // Due to incorrect character removal logic the new size of the newly formed string is incorrect
    //cout << "s1  size = " << s1.size() << endl;
    //cout << "s2 size = " << s2.size() << endl;
}

void removal(string s)
{
    // over here we strip the string naked and send it over for reversing and palindrome checking 
    // (65 = 'A' , 90 = 'Z')   (97 = 'a' , 122 = 'z')

    for(auto &a : s)
    {
        if(!(a >='A' && a <= 'Z' || a >= 'a' && a <= 'z')) // Incorrect condition, We have to check for all alphanumerics and ignore the rest
        {
            a = '\0'; // Incorrect logic for character removal, creates problem in the palindrome check
        
        }
        if(a >='A' && a <= 'Z')
        {
           a = a + 32;
        }
    }
    cout << "NAKED STRING  " << s << endl;
    reversal_Check(s);
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    // cout << "Enter a string \n";    
    // getline(cin, s);

    removal(s);
    return 0;
}