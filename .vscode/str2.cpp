#include<bits/stdc++.h>
using namespace std;
struct person{
    string name;
    int age;
    double salary;
};
int main()
{
    int i;
    person p[2];
    for (i = 0; i < 2; i++)
    {
        cout<<"enter the person details "<<(i+1)<<endl;
        cin>>p[i].name;
        cin>>p[i].age;
        cin>>p[i].salary;
    }
    cout<<"details of users are as follows"<<endl;
    for ( i = 0; i < 2; i++)
    {
        cout<<"details: "<<(i+1)<<endl;
        cout<<"name: "<<p[i].name<<endl;
        cout<<"age: "<<p[i].age<<endl;
        cout<<"salary: "<<p[i].salary<<endl;
    }    

    
    return 0;

    

}