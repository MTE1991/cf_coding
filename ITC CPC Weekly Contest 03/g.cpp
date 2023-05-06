/**
 * Author     : Mamun
 * From       : BUP(CSE)
 * Created on : 06/05/2023
**/

/// Header Files ///
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using  namespace  std;
using namespace __gnu_pbds;

/// Macros ///

#define tree <ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define F first
#define S second
#define nl "\n"
#define pb push_back
#define pf push_front
#define db double
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
//#define bug(...) _f (#__VA_ARGS_, _VA_ARGS_)
#define precision(x) cout.setf(ios::fixed); cout.precision(x);

inline ll nxt(){
    ll x;
    cin>>x;
    return x;
}
void solve(){
    ll n;
    cin>>n;
    set<ll>st;
    for(ll i=0;i<n;i++){
     string s;
     cin>>s;
     if (s.size()<=6)
        {
            ll num=stoll(s);
            if (num>=0)
            {
                st.insert(num);
            }
        }   
    }
    ll ans=0;
    for(auto it:st){
        if(it==ans){
            ans++;
        }
    }
    cout<<ans<<nl;
}
int main() {
    fast;
    ll tc=1;//nxt();
    while(tc--){
        solve();
    }
    return 0;
}