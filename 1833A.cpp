#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        for (int j = 0; j < n - 1; j++) {
            if (s[j] != s[j + 1]) {
                count++;
                j++; // Skip the next character as it has been merged
            }
        }
        count++; // Add 1 for the final melody

        results.push_back(count);
    }

    for (int i = 0; i < t; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
