#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

#define ll long long

const int inf = 1e9 + 7;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        ll ans=(a[0]%inf);
        ll b=((a[1]-1)%inf);
        ll c=((a[2]-2)%inf);
        ans=(ans*b)%inf;
        ans=(ans*c)%inf;
        cout<<ans%inf<<"\n";
   }
}
