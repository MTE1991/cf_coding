/**
 * Author     : Mamun
 * From       : BUP(CSE)
 * Created on : 10/12/22
**/
/**
 * One day You'll leave this world
 * behind, So live a life you'll
 * remember!
 * to try, to try and to vary the trials
 * don't lose hope
**/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
typedef long long ll;
#define F first
#define S second
#define db double
#define pb push_back
#define pi acos(-1.0)
#define fast ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define nl "\n"
#define all(v) v.begin(),v.end()
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>(v))
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define vll vector<ll>
#define precision(x) cout.setf(ios::fixed); cout.precision(x);
#define tc(t) ll tt; cin >> tt; while (tt--)
#define clean cout.flush()
#define tree <ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
using namespace __gnu_pbds;
using namespace std;
bool isprime(ll x)
{
    if(x==1){ return false; }
    else{ for(int i=2; i<=sqrt(x); i++) if(x%i==0){ return false; } }         
    return true;
}
/*#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif*/

/**
 *  ||\\  //||    //\\    |\\  //|| ||    || |\\  ||
 *  || \\// ||   //==\\   ||\\// || ||    || ||\\ ||
 *  ||      ||  //    \\  ||     || ||====|| || \\||
**/

void solve(){
    string s;
    cin>>s;
    if (s.size()&1)
    {
        for (int i = 0; i < s.size()-2; i+=2)
        {
            swap(s[i],s[i+1]);

        }
    }
    else
    for (int i = 0; i < s.size()-1; i+=2)
    {
        swap(s[i],s[i+1]);
    }
    cout<<s<<nl;
}
int main(int argc, char const *argv[]){
    fast;
    tc(t){
    solve();
    }
    //solve();
    return 0;
}