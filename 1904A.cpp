#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, xK, yK, xQ, yQ;
        cin >> a >> b >> xK >> yK >> xQ >> yQ;

        // Calculate the potential positions of the knight
        long long dx = abs(xK - xQ);
        long long dy = abs(yK - yQ);

        // Check if the knight's move can attack both the king and queen
        if ((dx % a == 0 && dy % b == 0 && (dx / a) % 2 == (dy / b) % 2) ||
            (dx % b == 0 && dy % a == 0 && (dx / b) % 2 == (dy / a) % 2)) {

            // Calculate the number of positions
            long long positions = min(dx / a, dy / b);
            cout << positions << "\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}
