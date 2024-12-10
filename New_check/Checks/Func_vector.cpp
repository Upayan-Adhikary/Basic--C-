#include<iostream>
#include<vector>

int pass(std::vector<int>& n)
{

    for(auto a : n)
    {
        std::cout << a+3 << " ";
    }
}

int main()
{
    std::vector<int> v;
    int n = 5;

    while(n > 0)
    {
        v.emplace_back(n);
        n--;
    }

    pass(v);
}

/*
vector<int>: Pass by value (makes a copy, rarely recommended for large vectors).
vector<int>&: Pass by reference (allows modifications to the original vector).
const vector<int>&: Pass by reference but read-only (efficient for large vectors that don’t need modification).

Using & helps improve performance and allows flexibility in how the vector is handled.
*/