//      *      
//     * *     
//    * * *    
//   * * * *   
//  * * * * *  
// * * * * * * 
//  * * * * *  
//   * * * *   
//    * * *    
//     * *
//      *

#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    for(int i = 0; i<=n; i++)
    {
        for(int j = n-1-i; j>=0; j--)
        {
            cout<<" ";
        }
        for(int j = 0; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<<" ";
        }
        for(int j = i; j<n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}