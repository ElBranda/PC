#include <iostream>

using namespace std;

int main() {
    int t, n, a;

    cin >> t;

    while (t--) {
        int myr=-1, mnr=100;

        cin >> n;

        while (n--) {
            cin >> a;

            myr = (a > myr ? a : myr);
            mnr = (mnr > a ? a : mnr);
        }

        cout << (myr-mnr)*2 << endl;
    }

    return 0;
}