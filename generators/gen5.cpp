#include <bits/stdc++.h>  
using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<ll,ll> p64;
typedef vector<ll> v64;
typedef vector<vector<ll> > vv64;
typedef vector<p64> vp64;

#define fi(i,a,b) for(ll i = (a); i < (b); i++)
#define fr(i,a,b) for(ll i = (a); i >=(b); i--)
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define pb push_back
#define inf 2e15
#define inp(arr,z) for(int i=0; i<z; i++)cin>>arr[i]
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()

ll M= 1e9 +7;

ll power(ll a , ll b ){ll r=1;ll o=a;if(b<=0)return 1;
  while(b!=0){if(b%2)r=(r*o)%M,b--; else {b/=2; o=(o*o)%M;}}
   return r;}

//-----------------------------------------------------------------------------------
void solve();

int main(){

fast_cin();
#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
freopen("test5", "w", stdout);
#endif

ll t=1;
// cin >> t;
while (t--)
{solve();cout<<endl;}
return 0;
}

//---------------------------------------------------------------------------------------






void solve(){

// ll t=0 ;
cout <<29999<<endl;
 
 fi(i,0,29999){

cout<<10<<endl;
     fi(j,0,10){

         cout<< rand()%3<<endl;
     }
     cout<<endl;

 }
}
