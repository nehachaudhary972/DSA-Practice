#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p, size;
    cout<<"enter the size of array you want to store"<<endl;
    cin>>size;
    p= new int[size];
    cout<<"enter the value to be stored in the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>p[i];
    }
    cout<<"value in the array are"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
    
    

}