#include<iostream>
#include<string>
// Only checks for palindrome condition against alphabets in a string
int main()
{
    std::string s = "0P";
    std::string s2;

    //Loop that iterates through string s
    for (int i = 0; i < s.size(); i++) 
    {    
        // Converts uppercase characters to lowercase
        if(isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }

        // Finding the character whose ASCII value fall under this range
        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z') 
        {
            // Erase function to erase the character
            s.erase(i, 1);
            i--; //Since after erasing the pointer moves to the next character, hence resetting it to the original point according to the loop condition
        }
        s2 = s;
    }

        //Reversing string s and storing it in s2
        int len = s.size()  - 1;
        for(int i = 0; i <= len; i++)
        {
            char temp = s[len - i];
            s2[i] = temp;
        }


            std::cout << s2 << std::endl;
            std::cout << s << std::endl;

            //Comparing both the strings s and s2
            if(s.compare(s2) == 0)
            std::cout << "true";
            else
            std::cout << "false";
}