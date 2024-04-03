#include <iostream>

using namespace std;

int main() {
    int t, a, sum=0;
    string d;

    cin >> t;

    while (t--) {
        cin >> d;

        if (d == "donate") {
            cin >> a;
            sum += a;
        } else
            cout << sum << endl;
    }

    return 0;
}