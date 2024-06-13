#include <iostream>
#include <string>

using namespace std;

int d(string e) {
    int sum = 2;
    string l = to_string(e.length());
    
    if (e=="1") return 1;
    
    while (l != to_string(l.length())){
        l = to_string(l.length());
        sum++;
    }
    
    return sum;
}

int main() {
    string e;
    
    while (getline(cin, e) && e != "END") {
        cout << d(e) << endl;
    }
    
    return 0;
}
