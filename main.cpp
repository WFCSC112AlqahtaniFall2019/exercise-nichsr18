#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8]; // User values
    int newVctr[8];//New Array
    int i;                        // Loop index

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 1; i <= NUM_ELEMENTS; ++i) {
        newVctr[i] = revVctr[NUM_ELEMENTS - i]; // Swap
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}