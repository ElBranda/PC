#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

double price(long long p, long long a, long long b, long long c, long long d, long long n) {
    return (p*(sin(a*n+b)+cos(c*n+d)+2));
}

int main() {
    long long p, a, b, c, d, n;
    
    while (cin >> p >> a >> b >> c >> d >> n) {
        double myr=INT_MIN, dif=INT_MIN;
        
        for (long long i = 0; i < n; i++) {
            double pr=price(p, a, b, c, d, i+1);
            
            myr = (pr > myr ? pr : myr);
            
            dif = (dif < myr-pr ? myr-pr : dif);
        }
        
        printf("%.6lf\n", dif);
    }
    
    return 0;
}
