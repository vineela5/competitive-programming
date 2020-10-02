#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define f0(i,a,b) for(int i=a;i<b;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,a,b) for(int i=a;i>b;i--)
#define f3(i,a,b) for(int i=a;i>=b;i--)
#define loopt int t; cin>>t; while(t--)
//using namespace std;
int main()
{loopt
{
 
ll x,y;
cin>>x>>y;
ll a,b;
cin>>a>>b;
if(x==y)
{
    cout<<min(x*b,2*x*a)<<endl;
}
else if(x>y)
{
   ll k=(x-y)*a ;
   cout<<min(k+(b*y),min((x+y)*a,(x*b)+k))<<endl;
}
else
{
    ll l=a*(y-x);
    cout<<min(l+b*x,min((x+y)*a ,l+(y*b)))<<endl ;
}
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
return 0;}