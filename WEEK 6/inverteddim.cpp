#include <iostream>
using namespace std;

int main() {
    int row_size;
    cout << "Enter desired number of rows: ";
    cin >> row_size;

    // First half (increasing)
    for (int row = 1; row <= row_size; row++) {  
        for (int col = 1; col <= row; col++) {  
            cout << "*";
        }
        cout << endl;
    }

    // Second half (decreasing)
    for (int row = row_size; row >= 1; row--) {  
        for (int col = 1; col <= row; col++) {  
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
