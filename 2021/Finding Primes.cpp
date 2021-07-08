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
ll p[10000111],sum[10000111];
vector<ll>v;
void pr()
{
    p[1]=1;
    ll sq=sqrt(10000000);
    //cout<<sq<<endl;
    //v.pb(2);
    for(ll i=4; i<=10000000; i+=2)
        p[i]=1;
    for(ll i=3; i<=sq; i+=2)
    {
        if(p[i]==0)
        {
           // v.pb(i);
            for(ll j=i*i; j<=10000000; j+=i)
                p[j]=1;
        }

    }
    for(ll i=2;i<=10000000;i++)
    {
        if(p[i]==0)
        {
            sum[i]=sum[i-1]+1;
        }
        else
            sum[i]=sum[i-1];
       //cout<<i<<in<<sum[i]<<endl;
    }
    //cout<<v.size()<<endl;
//    for(ll i=0;i<v.size();i++)
//        cout<<v[i]<<endl;
//    for(ll i=2; i<=10000000; i++)
//    {
//        if(p[i]==0)
//        {
//            v.pb(i);
//            //cout<<i<<endl;
//        }
//
//    }
//    cout<<v.size()<<endl;
//    a[0]=0;
//    a[1]=0;
//    ll flag=0,val;
//    for(ll i=2; i<=10000000; i++)
//    {
////        if(p[i]==0)
////        {
////            a[i]=a[i-1]+i;
////            continue;
////        }
//        flag=0;
//        for(ll j=0; v[j]*v[j]<=i&&j<v.size(); j++)
//        {
//            if(i%v[j]==0)
//            {
//                flag=1;
//                val=v[j];
//                break;
//            }
//        }
//        if(flag==1)
//            a[i]=a[i-1]+val;
//        else
//            a[i]=a[i-1]+i;
//            cout<<i<<in<<a[i]<<endl;
//    }
}

int main()
{
    fast
    pr();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<sum[n]-sum[n/2]<<endl;
    }
    return 0;
}
