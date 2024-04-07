#include<bits/stdc++.h>
using namespace std;
// Function to calculate total seek time
int calculateSeekTime(const vector<int>& requests, int head) {
    int seekTime = 0;
    for (int i = 0; i < requests.size(); ++i) {
        seekTime += abs(head - requests[i]);
        head = requests[i];
    }
    return seekTime;
}

int main() {
    int n; // Number of requests
    cout << "Enter the number of disk requests: ";
    cin >> n;

    vector<int> requests(n); // Array to store the requests
    cout << "Enter the disk requests: ";
    for (int i = 0; i < n; ++i) {
        cin >> requests[i];
    }

    int initialHead; // Initial position of the disk head
    cout << "Enter the initial position of the disk head: ";
    cin >> initialHead;

    int totalSeekTime = calculateSeekTime(requests, initialHead); // Calculate total seek time
    cout << "Total seek time using FCFS: " << totalSeekTime << endl;

    return 0;
}
