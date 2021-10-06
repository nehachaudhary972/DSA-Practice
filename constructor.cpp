#include<bits/stdc++.h>
using namespace std;
class YouTubeChannel{
public:
   string Name;
   string OwnerName;
   int SubscriberCount;
   int Likes;
   list<string>publishedVideoTitle;
 YouTubeChannel(string name,string ownername,int subscribercount,int likes){
     Name= name;
     OwnerName= ownername;
     SubscriberCount=subscribercount;
     Likes=likes;
 }
void GetInfo() {
    cout<<"Name: "<<Name<<endl;
    cout<<"OwnwrName: "<<OwnerName<<endl;
    cout<<"SubscriberCount: "<<SubscriberCount<<endl;
    cout<<"Likes: "<<Likes<<endl;
    cout<<"Videos: "<<endl;
    for(string videoTitle:publishedVideoTitle){
        cout<<videoTitle<<endl;
    }
     }
};
int main()
{
YouTubeChannel ytChannel("code chef","Harry",89,789);
ytChannel.publishedVideoTitle.push_back("c++ for beginners");
ytChannel.publishedVideoTitle.push_back("c++oop");
ytChannel.publishedVideoTitle.push_back("python for beginners");
YouTubeChannel ytChannel2("code Rankers","Amit",78,765);
ytChannel2.publishedVideoTitle.push_back("c++ Advance");
ytChannel2.publishedVideoTitle.push_back("Java Script");
ytChannel.publishedVideoTitle.push_back("Java for beginners");

     ytChannel.GetInfo();
     ytChannel2.GetInfo();
     return 0;


}



