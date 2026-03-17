#include <iostream>
using namespace std;

int main() {
    int data[4];
    int received[8];   
    int hamming[8];    

    for (int i = 0; i < 4; i++) {
        cin >> data[i];
    }

    hamming[3] = data[0]; // D1
    hamming[5] = data[1]; // D2
    hamming[6] = data[2]; // D3
    hamming[7] = data[3]; // D4

    hamming[1] = hamming[3] ^ hamming[5] ^ hamming[7]; // P1
    hamming[2] = hamming[3] ^ hamming[6] ^ hamming[7]; // P2
    hamming[4] = hamming[5] ^ hamming[6] ^ hamming[7]; // P4

    cout << "Generated Hamming Code: ";
    for (int i = 1; i <= 7; i++) {
        cout << hamming[i];
    }
    cout << endl;

    for (int i = 1; i <= 7; i++) {
        cin >> received[i];
    }

    int p1 = received[1] ^ received[3] ^ received[5] ^ received[7];
    int p2 = received[2] ^ received[3] ^ received[6] ^ received[7];
    int p4 = received[4] ^ received[5] ^ received[6] ^ received[7];

    int errorPosition = p4 * 4 + p2 * 2 + p1;

    if (errorPosition == 0) {
        cout << "No Error Detected" << endl;
    } else {
        cout << "Error Detected at position: " << errorPosition << endl;

        received[errorPosition] ^= 1;

        cout << "Corrected Hamming Code: ";
        for (int i = 1; i <= 7; i++) {
            cout << received[i];
        }
        cout << endl;
    }

    return 0;
}
