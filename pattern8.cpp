#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }

    }











/*output:
***
**
*


 */



//
// Created by 91919 on 07-07-2023.
//
