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
bool p[100000111];
//vector<pair<ll,ll>>vv;
vector<int>v;
void pr()
{
    int sq=sqrt(89999999),i,j;
    for(i=2; i<=sq; i++)
    {
        if(!p[i])
        {
            for(j=i*i; j<=89999999; j+=(i+i))
                p[j]=true;

        }
    }
    v.pb(2);
    for(i=3; i<=89999999; i+=2)
    {
        if(!p[i])
            v.pb(i);
    }
    //cout<<v.size()<<"\n";

}

int main()
{
    fast
    pr();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n-1]<<"\n";
    }
    return 0;
}
