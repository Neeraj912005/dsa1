#include<iostream>
using namespace std;
//charecter to lower
char tolowercase(char ch){
if(ch>='a'&& ch <='z'){
    return 0;
}
else{
    char temp =ch -'A' +'a';
    return 0;
}



}
//palindrome and reverse
bool checkPalindrome(char a[],int n){
int s=0;
int e=n-1;
while(s<=e){
    if(a[s] !=a[e])
    {
        return 0;
    }
    else{
        s++;
        e--;

    }
}
return 1;

}
//reverse of string
void reverse(char name[],int n){
int s=0;
int e=n-1;

while(s<e){
swap(name[s++],name[e--]);
}
}
//length of string
int getlength(char name[]){
int count=0;
for(int i=0; name[i] !='\0';i++){
    count++;

}
return count;


}
int main(){
char name[20];
cout << "Enter your  name"<<endl;
cin>>name;
//name[2]='\0';
cout<<" your is  name"<<endl;
cout<<name<<endl;
 int len =getlength(name);
cout<<"length:"<<getlength(name)<<endl;
cout<<"length:"<<len <<endl;

reverse(name,len);
cout<<"your name is";
cout<<name<<endl;
cout<<"Palindrome or not:"<< checkPalindrome(name,len)<<endl;

return 0;
}
