#include<iostream>
#include<map>

// Understand Maps more
int main()
{   int n = 1; int a  = 10;
    std::map<int, int> mpp; // This type of map stores the data in a chronological fashion
    std::unordered_map<int, char> mp2;  // Unordered Map stores
    for(int i = 0; i < 5; i++)
    {
      mpp[n]++; 
      n = n+a;
    }

    
    for(auto it : mpp)
    {
        std::cout << it.first << " -- " << it.second << std::endl;
    }
}