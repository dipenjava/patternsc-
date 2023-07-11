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
        int j=1;
        int start=n-i+1;
        while(j<=start)
        {
            cout<<"*";
            j++;



        }
        cout<<endl;
        i++;
    }
    }


/*output:
 ***
  **
   *
/



//
// Created by 91919 on 07-07-2023.
//
