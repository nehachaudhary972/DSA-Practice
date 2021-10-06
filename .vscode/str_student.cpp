#include<bits/stdc++.h>
using namespace std;
struct student
{
    int rno;
    string name;
    int mks;

};
int main()
{
 student s[5];
int i;
cout<<"enter student details "<<(i+1)<<endl;
for ( i = 0; i < 5; i=i+1)
{
    cin>>s[i].rno;
    cin>>s[i].name;
    cin>>s[i].mks;

}
cout<<"student record are as follows whose marks>75: "<<endl;
for ( i = 0; i < 5; i=i+1)
{
    if(s[i].mks>75)
    {
    cout<<"details: "<<(i+1)<<endl;
    cout<<"roll number of student: "<<s[i].rno<<endl;
    cout<<"name of student: "<<s[i].name<<endl;
    cout<<"marks of student: "<<s[i].mks<<endl;
    }
}   
    return 0;

}


