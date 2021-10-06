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
         SubscriberCount--;
     }
     void Likes(){
         LikesCount++;
     }
     void publishVideo( string title){
         publishedVideoTitle.push_back(title);
     }
    
    
 }; 
 class CookingYouTubeChannel:public YouTubeChannel{
     public:
 
 CookingYouTubeChannel(string name,string ownername):YouTubeChannel(name,ownername){
} 
};
int main()
{
 CookingYouTubeChannel ytChannel("harry's kitchen","Harry");
 CookingYouTubeChannel youtubeChannel("")
 ytChannel.publishVideo("cake");
 ytChannel.publishVideo("sandwich");
 ytChannel.publishVideo("cold coffee");
     ytChannel.Subscribe();
     ytChannel.Subscribe();
     ytChannel.Unsubscribe();
     ytChannel.Likes();
     ytChannel.Likes();



     ytChannel.GetInfo();
     return 0;


}

