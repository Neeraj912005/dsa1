#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(13);
    v.push_back(2);

    // Sort the vector before using binary_search
    sort(v.begin(), v.end());


    // Now we can perform binary search
    cout << binary_search(v.begin(), v.end(), 4) << endl; // Should output 1 (true)

    return 0;
}
