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
const int mxN=1e6;
bool isp[mxN+5];
void siv()
{
    for(int i=2; i<=mxN; i++)isp[i]=0;
    for(int i=4; i<=mxN; i+=2)isp[i]=1;
    int sq=sqrt(mxN);
    for(int i=3; i<=sq; i+=2)
    {
        if(!isp[i])
        {
            for(int j=i*i; j<=mxN; j+=(i+i))
                isp[i]=0;
        }
    }
}

int dd(int n)
{
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 2;
    if(!isp[n])return 0;
    int sq=sqrt(n);
    for(int i=sq; i>=1; i--)
    {
        if(n%i==0)
        {
            //cout<<i<<in<<n/i<<endl;
            return dd(i)+dd(n/i);
        }
    }
}
int main()
{
fast
    siv();
    int n;
    cin>>n;
    cout<<dd(n)<<"\n";
}
