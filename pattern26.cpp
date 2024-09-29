#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;

    while (i <= n) {
        // Print leading spaces
        int space = i - 1;
        while (space) {
            cout << " ";
            space--;
        }

        // Print numbers in the row
        int j = 1; // Initialize j here
        while (j <= n - i + 1) { // Adjust the condition to fit the pattern
            cout << i + j - 1; // Print the current number
            j++;
        }

        cout << endl; // Move to the next line
        i++;
    }

    return 0;
}
