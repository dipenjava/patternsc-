#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A' + i + j - 2;
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
 * BCD
 * CDE
 */





//
// Created by 91919 on 07-07-2023.
//
