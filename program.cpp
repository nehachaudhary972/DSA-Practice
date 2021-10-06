#include <bits/stdc++.h>
using namespace std;
int main()
{
 int i,fact=1,number;
    cout<<"enter number: ";
    cin>>number;
    for ( i = 1; i <=number ; i++)
    {
        fact=fact*i;
    }
    cout <<" factorial of " <<number<<" is:77 "<<fact<<endl;
    return 0;
}