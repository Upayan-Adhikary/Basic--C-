#include<iostream>
// search the frequency of each element in an array and if the element does not exist print "ELEMENT DOES NOT EXIST"
// Use MAPS
#include<map>
int main()
{
    int n;
    std::cout << " Enter the size of array: ";
    std::cin >>  n;
    int arr[n];

    std::cout << " Enter the elements into the array " << std::endl;
    for(int i=0; i<n; i++)
    {
        std::cin >> arr[i];  
    }

    // Precompute using maps
    std::map<int, int> mp;
    for(int j=0; j<n; j++)
    {
        mp[arr[j]]++;
    }

    // Fetch
    std::cout <<" Enter the element for which you wish to find the frequency ";
    int query;
    std::cin >> query;
    std::cout << "The number " << query <<" appears "<< mp[query] << " times in the array" << std::endl;
}