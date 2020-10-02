#include<bits/stdc++.h>
using namespace std;
#include<math.h>
#include<cstdlib>
typedef long long int ll;
int main()
{
 
ll t;cin>>t;
while(t--)
{
    int a,b   ;
    cin>>a>>b ;
    if(a==b)
    {
        cout<<4*a*a<<endl;
 
        
    }
    
    
       else if(a-2*b<0 && a>b)
        {
            cout<<4*b*b<<endl;
        }
        else if(a-2*b>=0 && a>b)
        {
            cout<<a*a<<endl;
        }
        
 
    
     
    
    else if(b-2*a<0 && b>a)
        {
            cout<<4*a*a<<endl;
        }
        else if(b-2*a>=0 && b>a)
        {
            cout<<b*b<<endl;
        }
        
 
    
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
return 0;
 
