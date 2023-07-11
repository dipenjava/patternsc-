#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char  h='A'+i+j-2;
            cout<<h;
            j++;
        }
        cout<<endl;
        i++;
    }


}




/*
 * output
 * A
 * BC
 * CDE
 */










//
// Created by 91919 on 07-07-2023.
//
