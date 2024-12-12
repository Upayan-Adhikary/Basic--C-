// https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

//{1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}

#include<iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);

        for(auto a : v)
        {
            cout << a << " ";
        }


        int count = 0;
        int cnt = 0;
        int len = v.size();
        
        vector<int>::iterator it = v.begin() ;
        
        if(*it == 0) {
        return -1;
        }
        it = it + (*it);
        cout << endl;
        cout << *it;
        // while(count <= len)
        // {
        //     count += (*it);   
        //     cnt++;
        //     it++;
        //     it += (*it);

        // }

        // cout << endl;
        // cout << cnt;
}