#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,f=1;
    cout<<"enter the number to find its factorial"<<endl;
    cin>>n;
    i=1;
    while (i<=n)
    {
        f=f*i;
        i++;
    }
    cout<<"factorial of "<<n<<" = " <<f;
    return 0;
}
