//hmm ji toh cpp.json file mai hamara custom snippet
// aur agar ham ab template type krege toh vo use hoga
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=15;
    i>10 ? cout<<"Greater" : cout<<"Smaller";
    return 0;
}*/

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
    cout <<" factorial of " <<number<<" is: "<<fact<<endl;
    return 0;
    
}
