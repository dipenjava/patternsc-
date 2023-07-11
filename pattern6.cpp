#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            char ch = 'A' + n - i;
            cout << ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;

    }
}


/* output
E
DD
CCC
BBBB
AAAAA

 */




//
// Created by 91919 on 07-07-2023.
//
