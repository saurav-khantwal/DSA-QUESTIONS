// 5
// 54
// 543
// 5432
// 54321
// 543210
// 54321
// 5432
// 543
// 54
// 5

#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0; i<n; i++)
    {
        int x = n;
        for(int j = 0; j<=i; j++)
        {
            cout<<x--;
        }
        cout<<endl;
    }

    for(int i = 0; i<=n; i++)
    {
        int x = n;
        for(int j = i; j<=n; j++)
        {
            cout<<x--;
        }
        cout<<endl;
    }
}