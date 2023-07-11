#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int i = 1;
    while (i <= n)
    {
       int j=1;
       int start=n-i+1;
       while(j<=start)
       {
           cout<<j;
           j++;
       }
       int star1=i-1;
       while(star1)
       {
           cout<<"*";
           star1--;
       }
       int yes= i-1;
       while(yes)
       {
           cout<<'*';
           yes--;
       }
       int count= n-i+1;
       while(count)
       {
           cout<<(count);
           count--;
       }
       cout<<endl;
       i++;

    }


}



/*output
1234554321
1234**4321
123****321
12******21
1********1

 * /






//
// Created by 91919 on 07-07-2023.
//
