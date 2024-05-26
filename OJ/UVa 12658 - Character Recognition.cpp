#include <iostream>

using namespace std;

int main() {
    string d[5], num;
    int n;
    
    cin >> n; cin.ignore();
    
    for (int i = 0; i < 5; i++) {
        cin >> d[i];
    }
    
    for (int i = 0; i < d[3].length(); i+=4) {
        if (d[3][i] == '.' && d[3][i+1] == '*') num+="1";
        else if (d[3][i] == '*' && d[3][i+1] == '.') num +="2";
        else num+="3";
    }
    
    cout << num << endl;

    return 0;
}
