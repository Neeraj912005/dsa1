#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,string>m;
m[1]="babbar";
m[2]="kumar";
m[3]="love";

for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}


}
