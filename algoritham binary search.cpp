#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator> // for std::distance
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "lower bound: " << distance(v.begin(), lower_bound(v.begin(), v.end(), 6)) << endl;
    cout << "upper bound: " << distance(v.begin(), upper_bound(v.begin(), v.end(), 6)) << endl;
    cout<<"empty or not"<<v.empty()<<endl;
    cout<<"size of vector"<<v.size()<<endl;

    int a=3;
    int b=5;

    cout<<"max"<<max(a,b);
    cout<<"min"<<min(a,b);
    /// swap process in this program
    swap(a,b);
    cout<<endl<<"a"<<a<<endl;
    ///string makeing process
    string abcd= "abcd ";
    reverse(abcd.begin(),abcd.end());
    cout<<"string"<<abcd<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }





    return 0;
}
