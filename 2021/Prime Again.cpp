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
#define gcd __gcd
const int mxn=66000;
bool isp[mxn+2];
vector<int>prime;
void sive()
{
    for(int i=0;i<=mxn;i++)isp[i]=0;
    for(int i=4;i<=mxn;i+=2)isp[i]=1;
    for(int i=3;i*i<=mxn;i+=2)
    {
        if(isp[i]==0)
        {
            for(int j=i*i;j<=mxn;j+=(i+i))
                isp[j]=1;
        }
    }
    prime.pb(2);
    for(int i=3;i<=mxn;i+=2)
    {
        if(isp[i]==0)prime.pb(i);
    }
}
int main()
{
    fast
    sive();
    int t;
    cin>>t;
    while(t--)
    {
        ll n,flag,i;
        cin>>n;
        if(n==3)
        {
            cout<<"2"<<"\n";
            continue;
        }
        if(n%2==0)n--;
        else n-=2;
        for(i=n;;i-=2)
        {
            flag=0;
            for(int j=0;prime[j]*prime[j]<=i&&j<prime.size();j++)
            {
                if(i%prime[j]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
