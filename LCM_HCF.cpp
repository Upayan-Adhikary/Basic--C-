// Greatest Common Divisor = Highest Common Factor   GCD(9, 12) = 3   GCD(11, 7) = 1
// (1, 3, 9) (1, 11) (1, 7) (1, 2, 7, 14) (1, 2 ,3, 4, 6 ,12) 
// idea calculate the divisors for the smallest number and check which of those divisors leave a 0 remainder when it divides the bigger number 
// store those in a vector 
// sort the vector and print the last element
// calulate the Lowest Common Multiplier using the formula LCM(a,b) = a * b / GCD(a,b) https://en.wikipedia.org/wiki/Least_common_multiple

#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main()
{
    int n1, n2; // Two number for calculation
    cout << "Enter two numbers for the calculation of the GCD  ";
    cin >> n1 >> n2;

        if(n1 < 0 || n2 < 0)
        {
            cout << " Negative number ";
            return 0;
        }

    int smallest, largest;
    int lcm;
    list<int> ls;

    if(n1 == n2)
    {
      ls.push_back(n1);
      ls.push_back(n2);
      for(auto a : ls){
        cout << a << " ";
      }
      return 0;
    }
    
    else
     { 
        smallest = n1 < n2? n1 : n2;
        largest = n1 > n2? n1 : n2;

     }


     vector<int> v;
     for(int i = 1; i*i <= smallest; i++)
     {
        if(smallest % i == 0 && largest % i == 0)
        {
            
            v.push_back(i);

            if(smallest/i != i && largest % (smallest/i) == 0)
            {
                
                v.push_back(smallest/i);
            }
        }
     }
     

     int len = v.size();
     if(len == 1){
     //cout << "The GCD = 1";
        lcm = n1 * (n2 / 1);
        ls.push_back(lcm);
        ls.push_back(1);

     }

     else
     {
     
     //sort(v.begin(), v.end()); // Sort does not exist in MSVC we can use it in online compilers
     // vector<int>::iterator iter = v.end() - 1;
     //cout << " The GCD = " << *iter;

     int x = *max_element(v.begin(), v.end());  //Finds the maximum element in the vector v
     
     lcm = n1 * (n2 / x);
     ls.push_back(lcm);
     ls.push_back(x);
     }

        // Printing the list ls(LCM, HCF)
        for(auto b : ls){
        cout << b << " ";
      }
}