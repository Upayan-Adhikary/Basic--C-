#include<iostream>
// search the frequency of each element in an array and if the element does not exist print "ELEMENT DOES NOT EXIST"
// Use brute force and hashing in two different function

void Brute_force(int arr[], int n)
{
/* LOGIC 
 We take input for the element for which the frequency needs to be calculated
 Run a for loop for size N 
 Check if the element is present in the array and increase the counter, which will be count = 0, initially
 After the loop ends we check if counter is still zero then the element does not exist and we print "ELEMENT DOES NOT EXIST"    
 */
    int q;
    std::cout << " Enter the number for which the frequency is to be found " << std::endl;
    std::cin >> q;

    int count = 0;
    for(int j=0; j<n; j++)
    {
        if(q == arr[j])
        count +=1;
    }

    if(count == 0)
    std::cout<< "The queried number " << q << " Does not exist in the array";
    else
    std::cout <<"The frequency of " << q << " = " << count;
}

void Hashing(int arr[], int n)
{
/* LOGIC
Here we create a hash array with the the total size of the array equal the maximun input size
Set the initial value of the entire array equal to 0
After that we check for each  element in the input array we go the respective index in the HASH array and increase the value for that HASH array index element by +1
We later ask the user for the number for which they want to find out the frequency and  print the element hash[q] as the frequency
*/
  int hash[10] = {0};  // The size of this hash array is 10 which means the input array cannot have elements greater than 9 in it
  for(int  j = 0; j < n; j++)
  {
    hash[arr[j]] +=1;
  }

  int  q;
  std::cout<< " Enter the number for query " << std::endl;
  std::cin >> q;

  std::cout<< "The total frequecy for " <<  q << " = " << hash[q];
}

int main()
{
    int n;
    std::cin >> n;
    int arr[n];

    std::cout  << "Enter the array elements " << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i]; 
       
    }
    
    Brute_force(arr, n);
    std::cout << std::endl;
    Hashing(arr, n);
}