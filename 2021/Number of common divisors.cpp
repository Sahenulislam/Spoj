#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
//long long lcm(ll a, ll b)
//{
//    return (a / (__gcd(a, b))) * b;
//}
#define gcd __gcd
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define endll endl;

const int mxN = 1e6;
int nod[mxN + 1];

void SieveOfDivisors() {
    for (int i = 0; i <= mxN; i++) nod[i] = 0;
    for (int i = 1; i <= mxN; i++) {
        for (int j = i; j <= mxN; j += i) {
            nod[j] += 1;
        }
    }
}
int main() {
    fast
    SieveOfDivisors();
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        cout << nod[gcd(a, b)] << "\n";
    }
    return 0;
}
