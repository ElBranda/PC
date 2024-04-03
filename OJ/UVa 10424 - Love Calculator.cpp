#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int su(int a) {
    while (a > 9) {
        int n, sum=0;
        while (a!=0) {
            n=a%10;
            a/=10;
            sum+=n;
        }
        a=sum;
    }

    return a;
}

int ex(string s) {
    int l=s.length(), sum=0;

    for (int i = 0; i < l; i++) {
        if (isalpha(s[i])) {
            sum += (tolower(s[i]) - 96);
        }
    }

    return su(sum);
}



int main() {
    string t, n;

    while (getline(cin, t) && getline(cin, n)) {
        int it=ex(t), in=ex(n);
        float r;

        r = (it > in ? (float)in/it : (float)it/in)*100;
        
        printf("%.2f %%\n", r);
    }

    return 0;
}