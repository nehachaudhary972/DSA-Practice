#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,r=0;
    cout<<"enter a number to reverse its value"<<endl;
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        r=r*10+d;
        m=m/10;
    }
    cout<<"the reverse of the "<<n<<" = "  <<r;
    return 0;

}