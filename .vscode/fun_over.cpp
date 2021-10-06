#include<bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    cout<<"function 1"<<endl;
    return (a+b);
}
double add(double a, int b)
{
    cout<<"function 2"<<endl;
    return (a+b);
}
int main()
{
    cout<<"addition is "<<add(2,3)<<endl;
    cout<<"addition is "<<add(45.67,8)<<endl;
    return 0;
}
