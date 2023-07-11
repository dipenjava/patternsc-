#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int i=1;
    while(i<=n)
    {

        int space=i-1;
        while(space)
        {
            cout<<" ";
            space--;

        }
        int start=n-i+1;
        int j=1;
        int sta=1;
        while(j<=start)
        {
            cout<<i;

            j++;


        }



        cout<<endl;
        i++;
    }
    }


/*output
 111
  22
   3
 * /











//
// Created by 91919 on 07-07-2023.
//
