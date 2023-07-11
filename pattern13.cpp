#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i=1;
    while(i<=n) {

        int space = n - i;
        while (space) {
            cout << " ";
            space--;

        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;



        }
        int start=i-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;

    }
    }






/*output:
    1
  121
 12321
1234321

 */



//
// Created by 91919 on 07-07-2023.
//
