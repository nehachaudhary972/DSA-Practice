#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,r=0;
    cout<<"enter a number and check it is palindrome or not"<<endl;
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        r=r*10+d;
        m=m/10;
    }
    if(n==r)
    cout<<"pallimdrome"<<endl;
    else
    cout<<"not a pallindrome"<<endl;
    return 0;


}