#include<iostream>
#include<deque>
using namespace std;
int main(){


deque<int> d;

// element add kaise karege
d.push_back(1);
d.push_front(2);

//for(int i: d){
   // cout<<i<<" ";
///}
//d.pop_back();
//cout<<endl;
//for(int i: d){
  //  cout<<i<<" ";
///}
cout<<"before erase"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after Erase"<<d.size()<<endl;



}
