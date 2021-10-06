#include<bits/stdc++.h>
using namespace std;
class YouTubeChannel{
private:
   string Name;
   string OwnerName;
   int SubscriberCount;
   int LikesCount;
   list<string>publishedVideoTitle;
public:   
 YouTubeChannel(string name,string ownername){
     Name= name;
     OwnerName= ownername;
     SubscriberCount=0;
     LikesCount=100;
 }
void GetInfo() {
    cout<<"Name: "<<Name<<endl;
    cout<<"OwnwrName: "<<OwnerName<<endl;
    cout<<"SubscriberCount: "<<SubscriberCount<<endl;
    cout<<"Likes: "<<LikesCount<<endl;
   for(string videoTitle:publishedVideoTitle){
        cout<<videoTitle<<endl;
    }
}
     void Subscribe(){
         SubscriberCount++;
     }
     void Unsubscribe(){
         if(SubscriberCount>0)
         SubscriberCount--;
     }
     void Likes(){
         LikesCount++;
     }
     void publishVideo( string title){
         publishedVideoTitle.push_back(title);
     }
    
    
 };    

int main()
{
YouTubeChannel ytChannel("code chef","Harry");
ytChannel.publishVideo("c++ for beginners");
ytChannel.publishVideo("c++oop");
ytChannel.publishVideo("python for beginners");
     ytChannel.Subscribe();
     ytChannel.Subscribe();
     ytChannel.Unsubscribe();
     ytChannel.Unsubscribe();
     ytChannel.Unsubscribe();
     ytChannel.Likes();
     ytChannel.Likes();
    
     ytChannel.GetInfo();
     return 0;


}

