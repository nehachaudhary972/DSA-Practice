#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,factorial=1;
    cout<<"enter the number to find its factorial"<<endl;
    cin>>n;
    for ( i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    cout<<"factorial of "<<n<<" = " <<factorial;
    return 0;
    


}