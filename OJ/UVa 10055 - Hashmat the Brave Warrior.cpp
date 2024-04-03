#include <iostream>

using namespace std;

int main() {
    unsigned long long t, n;

    while (cin >> t >> n) {

        cout << (n > t ? n-t : t-n) << endl;
    }

    return 0;
}