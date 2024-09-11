#include<iostream>
#include<queue>
using namespace std;
int main(){
queue<string>q;
q.push("love");
q.push("babar");
q.push("kumar");
q.push("neeraj");
cout<<"size before pop"<<q.size()<<endl;



cout<<"first element queue "<<q.front()<<endl;
q.pop();
cout<<"first element queue "<<q.front()<<endl;

cout<<"size after pop"<<q.size()<<endl;




}
