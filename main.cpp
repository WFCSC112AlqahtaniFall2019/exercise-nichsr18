#include <iostream>
using namespace std;
#include <vector>
int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector<int>revVctr(8);               // User values
    int i;                        // Loop index
    int temp;

    cout << "Enter " << revVctr.size() << " integer values..." << endl;
    for (i = 0; i < revVctr.size(); ++i) {
        cin >> revVctr.at(i);
    }

    // Reverse
    for (i = 1; i <= revVctr.size()/2; ++i) {
        temp = revVctr.at(i - 1);
        revVctr.at(i-1) = revVctr.at(revVctr.size() - i);// Swap
        revVctr.at(revVctr.size() - i) = temp;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < revVctr.size(); ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl;

    return 0;
}
