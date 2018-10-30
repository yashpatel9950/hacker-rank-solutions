//101 hack 55
#include<bits/stdc++.h>
using namespace std ;//code by shan61916@gmail.com; 
typedef long long ll ;
using namespace std ;
int main()
{
    ll n ;
    cin>>n ;
    ll a[n],b[n] ;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i] ;
        b[i]=a[i] ;
    }
    sort(b,b+n) ;
    ll ct=0 ;
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=b[i])ct++ ;
    }
    if(ct==2)cout<<"1" ;
    else
    if(ct==0)cout<<"0" ;
    else
    cout<<"-1" ;
    
    return 0 ;
}
