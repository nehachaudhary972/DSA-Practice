#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,b=5;
    cout<<"number before swapping: "<<endl;
    cout<<"a:  "<<a<<endl;
    cout<<"b:  "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping: "<<endl;
    cout<<"a:  "<<a<<endl;
    cout<<"b:  "<<b<<endl;
    return 0;
    
}
