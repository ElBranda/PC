#include <iostream>

using namespace std;

int sd(int a) {
    int n, sum=0;

    while (a!=0) {
        n=a%10;
        a/=10;
        sum+=n;
    }

    if (sum>9) sum=sd(sum);

    return sum;
}

int main() {
    int t;

    while (cin >> t && t!=0) {
        cout << sd(t) << endl;
    }

    return 0;
}