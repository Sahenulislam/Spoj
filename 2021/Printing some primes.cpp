#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
long long lcm(ll a, ll b)
{
    return (a / (__gcd(a, b))) * b;
}
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
bool p[100000111],a[10000111],f[10000111];
//vector<pair<ll,ll>>vv;
vector<ll>v;
void pr()
{
    p[1]=1;
    ll cont=0;
    ll sq=sqrt(100000000);
    for(ll i=2; i<=sq; i++)
    {
        if(p[i]==false)
        {
            for(ll j=i*i; j<=100000000; j+=(i+i))
            {
                 p[j]=true;
                // cont++;
            }

        }
    }
    ll j=1;
    cout<<"2"<<"\n";
    for(ll i=3; i<=100000000; i+=2)
    {
       // cont++;
        if(p[i]==false)
        {
            if(j%100==0)
            {
                cout<<i<<"\n";
            }
            j++;
        }
    }
}

int main()
{
    fast
    pr();

    return 0;
}
