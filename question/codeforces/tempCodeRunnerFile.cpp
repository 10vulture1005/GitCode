#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

void SSTF(vector<int>& requests, int head) {
    int n = requests.size();
    vector<bool> visited(n, false);
    int totalSeekTime = 0;

    cout << "\nSeek Sequence: " << head;

    for (int i = 0; i < n; i++) {
        int minDist = INT_MAX;
        int index = -1;

        for (int j = 0; j < n; j++) {
            if (!visited[j]) {
                int dist = abs(requests[j] - head);
                if (dist < minDist) {
                    minDist = dist;
                    index = j;
                }
            }
        }

        visited[index] = true;
        totalSeekTime += minDist;
        head = requests[index];

        cout << " -> " << head;
    }

    cout << "\nTotal Seek Time: " << totalSeekTime << endl;
}

int main() {
    int n, head;

    cout << "Enter number of requests: ";
    cin >> n;

    vector<int> requests(n);

    cout << "Enter disk requests: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "Enter initial head position: ";
    cin >> head;

    SSTF(requests, head);

    return 0;
}