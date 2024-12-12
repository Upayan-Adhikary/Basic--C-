#include<iostream>
#include<vector>

int check_pass(std::vector<int>& pass)
{
    for(auto a : pass)
    {
        std::cout << a << " ";
    }

    return 0;
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
    check_pass(V_test);
    return 0;
}