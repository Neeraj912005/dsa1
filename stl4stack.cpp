#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string>s;
s.push("neeraj");
s.push("kumar");
s.push("pandey");


cout<<"top element"<<s.top()<<endl;
s.pop();
cout<<"top element"<<s.top()<<endl;
s.pop();
cout<<"top element"<<s.top()<<endl;


}
