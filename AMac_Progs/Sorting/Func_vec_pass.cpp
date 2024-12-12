#include<iostream>
#include<vector>

void check_pass(std::vector<int> pass)
{
  int len = pass.size();
  for(int i = 0; i < len; i++)
  {
    pass[i] += i; 
  }

    for(auto a : pass)
    {
        std::cout << a << " ";
    }
    
}

int main()
{
    std::vector<int> V_test ;
    int n = 10;
    while(n > 0)
    {
        V_test.emplace_back(n);
        n--;
    }
    
    // Checking the original value of the vector
    for(auto m : V_test)
    {
      std::cout << m << " ";
    }

    std::cout << std::endl;

    check_pass(V_test); // passing the vector as value creates a copy of the vector and avoides changes made inside the function being replicated to the original vector
    std::cout << std::endl;

    // Checking if the original vector is altered
    for(auto m : V_test)
    {
      std::cout << m << " ";
    }
}
