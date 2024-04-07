#include<bits/stdc++.h>
using namespace std;

int pageFaults(vector<int> pages, int capacity) {
    unordered_set<int> frameSet;
    queue<int> frameQueue;

    int faults = 0;

    for (int i = 0; i < pages.size(); ++i) {
        if (frameSet.size() < capacity) {
            if (frameSet.find(pages[i]) == frameSet.end()) {
                frameSet.insert(pages[i]);
                frameQueue.push(pages[i]);
                faults++;
            }
        } else {
            if (frameSet.find(pages[i]) == frameSet.end()) {
                int cnt=0;
                for(int j=i;j>0;j--){
                    if(page[j]==queue[j]){
                        cnt++;
                        if(cnt==3){
                            int nxt=page[j];
                            int prv=queue[j];
                            frameQueue.pop();
                            frameSet.erase(prv);
                            frameSet.insert(nxt);
                            frameQueue.push(nxt);
                            faults++;
                        }
                    }
                }
            }
        }
    }
    return faults;
}

int main() {
    vector<int> pages = {1,3,5,3,2,5,7,8,1,2,3,1,7};
    int capacity = 3;
    cout << "Total page faults using LRU: " << pageFaults(pages, capacity) << endl;

    return 0;
}
