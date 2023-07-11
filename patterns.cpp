#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count= 0;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A' + count;
            count++;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

}

/*
 * output
 * ABC
 * DEF
 * GHI
 */


//
// Created by 91919 on 06-07-2023.
//
