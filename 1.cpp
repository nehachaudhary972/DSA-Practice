#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int a[6],n,i;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"the reverse order of array is: "<<endl;

    for(i=(n-1);i>=0;i--){
        cout<<a[i]<<" ";

        
    }
   
    return 0;
}
