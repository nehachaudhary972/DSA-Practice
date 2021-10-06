#include<bits/stdc++.h>
using namespace std;
struct person
{
    char name[100];
    int age;
    double salary;

};
int main()
{
    person p1;
    cout<<"enter person details"<<endl<<"enter persone name"<<endl;
    cin>>p1.name;
    cout<<"enter persone age"<<endl;
    cin>>p1.age;
    cout<<"enter persone salary"<<endl;
    cin>>p1.salary;
    
    cout<<"person details are as follows"<<endl;
    cout<<"person name: "<<p1.name<<endl;
    cout<<"person age: "<<p1.age<<endl;
    cout<<"person salary: "<<p1.salary<<endl;
    
    return 0;


}



