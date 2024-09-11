#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,string>m;

m[1]="babar";
m[2]="love";
m[3]="kumar";

 m.insert( {5,"bheem"});

 cout<<"before erase"<<endl;
 for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
 }


 for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

cout<<"finding -3"<<m.count(-3)<<endl;
m.erase(13);
 cout<<"after erase"<<endl;
 for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
 }
///time complexcity (o of log(n) hoti hai);
auto it=m.find(5);
for( auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}





}
