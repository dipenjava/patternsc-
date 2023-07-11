#include<iostream>
using namespace std;
int main(){
    int n=3;
    int i=1;
    char start='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<start;
            start++;
            j++;

        }
        cout<<endl;
        i++;
    }

}

/*
 * output:
 * A
 * BC
 * DEF
 */











//
// Created by 91919 on 07-07-2023.
//
