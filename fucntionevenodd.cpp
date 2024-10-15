#include<iostream>
using namespace std;
//1== even
//0== odd
bool isEven(int a){
if(a%2==1){
    return 0;
}
else{
    return 1;
}
}
int main(){
int n;
cin>>n;

if(isEven(n)){
    cout<<"Number is Even"<<endl;
}
else{
    cout<<"Number is odd"<<endl;
}

return 0;

}
