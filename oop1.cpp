#include<bits/stdc++.h>
using namespace std;
class MyYouTubeChannel
{
public:
       string Name;
       string OwnerName;
       int SubscriberCount;
       int Likes;
       list<string>PublishedVideoTitle;    
};
int main()
{
   MyYouTubeChannel MyytChannel ;
   MyytChannel.Name = "coders";
   MyytChannel.OwnerName = "harry";
   MyytChannel.SubscriberCount = 678;
   MyytChannel.Likes = 6789;
   MyytChannel.PublishedVideoTitle = {"c++","python","java","Html"};


   cout<<"Name: "<<MyytChannel.Name<<endl;
   cout<<"OwnerName: "<<MyytChannel.OwnerName<<endl;
   cout<<"SubscriberCount: "<< MyytChannel.SubscriberCount<<endl;
   cout<<"Likes: "<< MyytChannel.Likes<<endl;
   cout<<"Videos: "<<endl;
   for(string VideoTitle: MyytChannel.PublishedVideoTitle){
      cout<<VideoTitle<<endl;
   }
return 0;
}