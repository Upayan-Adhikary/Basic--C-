#include<iostream>


using namespace std;

int arr2[10000000000] = {0}; // In global scope we get segmentation fault here 
int arr3[1000000000] = {0}; // 10 to the power 10 max possible size

int main()
{
  int arr[1000000] = {0};
  
  cout << arr[1000000 - 1];

}