#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<long long> even, odd;
    for (int i = 0; i < a; i++) {
        long long val;
        cin >> val;

        if (val % 2 == 0) {
            even.push_back(val);
        } else {
            odd.push_back(val);
        }
    }

    
    sort(even.begin(), even.end());
     reverse(even.begin(), even.end());

    sort(odd.begin(), odd.end());
     reverse(odd.begin(), odd.end());

    long long maxEven = -1;

    if (!even.empty()) maxEven = max(maxEven, even[0]);

   
    if (even.size() >= 2) maxEven = max(maxEven, even[0] + even[1]);

    
    if (odd.size() >= 2) maxEven = max(maxEven, odd[0] + odd[1]);

    cout << maxEven << endl;
    return 0;
}