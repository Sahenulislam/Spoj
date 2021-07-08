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
const int mxN = 1e6;
int isp[mxN+2];
vector <int>vv;
void Sieve()
{
    for(int i=1; i<=mxN; i++)
    {
        for(int j=i; j<=mxN; j+=i)
            isp[j]++;
    }
//    for(int i=1;i<=mxN;i++)
//        cout<<isp[i]<<endl;
    for(int i=1; i<=mxN; i++)
    {
        int c=isp[i];
        vector<int>v;
        for(int j=2; j*j<=isp[i]; j++)
        {
            while(c%j==0)
            {
                c/=j;
                v.pb(j);
                if(v.size()>=3)
                    break;
            }
            if(v.size()>=3)
                break;
        }
        if(c!=1)
            v.pb(c);
        if(v.size()==2&&v[0]!=v[1])
        {
            vv.pb(i);
        }
    }
    for(int i=8; i<vv.size(); i+=9)
        cout<<vv[i]<<"\n";
}

int main()
{
    fast
    Sieve();
    return 0;
}
