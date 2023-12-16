/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

void make_triangle(int n){
    for(int i = n; i>=0; i--){
        for(int j = i; j>=0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    make_triangle(5);

    return 0;
}
