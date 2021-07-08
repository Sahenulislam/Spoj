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
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
const int mxN = 1e7;
bool isp[mxN + 1];
vector <int> prime;
ll a[mxN+5];
void Sieve()
{
    for (int i = 0; i <= mxN; i++) isp[i] = 0;
    for (int i = 4; i <= mxN; i += 2) isp[i] = 1;
    for (int i = 3; i * i <= mxN; i += 2)
    {
        if (isp[i] == 0)
        {
            for (int j = i * i; j <= mxN; j += i + i)
            {
                isp[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for (int i = 3; i <= mxN; i += 2)
    {
        if (isp[i] == 0) prime.push_back(i);
    }
    for(int i=2; i<=10000000; i++)
    {
        if(isp[i]==0)
        {
            a[i]=a[i-1]+i;
            continue;
        }
        for(int j=0; prime[j]*prime[j]<=i&&j<prime.size(); j++)
        {
            if(i%prime[j]==0)
            {
                a[i]=a[i-1]+prime[j];
                break;
            }
        }
    }
}

int main()
{
    //fast
    Sieve();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<a[n]<<"\n";
    }
    return 0;
}
