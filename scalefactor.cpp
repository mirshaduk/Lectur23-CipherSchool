#include<iostream>
using namespace std;

int main()
{
    int a=5;


    int *x;

    x = &a;

    cout<<" "<<x<<" "<<x+1<<endl;
    cout<<x+2;
     return 0;
}