#include<iostream>
#include<string>

/*
Here we take a string input and find the frequency of the queried character in the string
Use brute force and hashing to complete the above operation
*/

void brute_force(std::string s, int l)
{
  char c;
  std::cout << "Enter the character for query: ";
  std::cin >> c;

  int count = 0;
  for(int i=0; i<l ; i++)
  {
    if(s[i] == c)
    count++;
  }

  if(count == 0)
  std::cout << " The character " << c << " Does not exist in the string";
  else
  std::cout << "The frequency of " << c << " = " << count;
}

void hashing(std::string s, int l)
{
    /*
    In total, there are 256 ASCII characters, and can be broadly divided into three categories:
    ASCII control characters (0-31 and 127)
    ASCII printable characters (32-126) (most commonly referred to)
    Extended ASCII characters (128-255)

    In this case we take a hash array of size 256, then we run a for-loop, the size of the inputted string
    go to the index location of the character in the hash array and increament by +1 
    hash[s[i]]
    the s[i] is auto converted to an integer number for use by the hash[]
    */

   int hash[256]  = {0};
   //Precompute
   for(int i=0; i<l; i++)
   {
    hash[s[i]] +=1;
   }

   //fetch
   char c;
   std::cout << " Enter  the charater for query: ";
   std::cin >> c;

   std::cout << "Frequecy of " << c << " = " << hash[c];

}

int main()
{
   std::string s;  
   std::cout<< "Enter a string: ";
   getline(std::cin, s); 
   int len = s.size();

   brute_force(s, len);
   std::cout<< std::endl;
   hashing(s, len);
}