#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    bool f = false;

    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++) {
            if (s.substr(i, 1) == "\"") {
                if (!f) {
                    cout << "``";
                } else {
                    cout << "''";
                }

                f = !f;
            } else {
                cout << s.substr(i, 1);
            }
        }

        cout << endl;
    }

    return 0;
}