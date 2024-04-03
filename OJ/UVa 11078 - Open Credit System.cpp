#include <iostream>
#include <climits>

using namespace std;

int main() {
    int t, n, c;

    cin >> t;

    while (t--) {
        int dif = INT_MIN, myr=INT_MIN;

        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> c;

            if (i!=0) {
                dif = max(dif, myr-c);
            }

            myr = max(myr, c);
        }

        cout << dif << endl;
    }

    return 0;
}