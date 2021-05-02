#include<bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long int
#define endl '\n'
#define check_time() cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1e9+7
#define INF 0x3f3f3f3f
#define maxarr(A,n) *max_element(A,A+n) 
#define minarr(A,n) *min_element(A,A+n);
#define ft first
#define sd second
#define all(v) v.begin(),v.end()
#define vll vector<ll> 
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define pb push_back

#define showd(a) for(auto k:a) cout<<k<<" ";cout<<endl;
#define show(x) cout<<#x<<" "<<x<<endl;
#define show2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define show3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;

ll power(ll x,ll y,ll p ){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll lcm(ll a , ll b){return (a*b)/__gcd(a,b);}

vll prefix_function(string s) 
{
    ll n = s.length();
    vll pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

void solve()
{
	ll n,i,m;
	string s;
	cin>>s;
	n=s.length();
	ll l=-1,r=n,apos=0,bpos=n-1;
	
	bool f=false;
	while(1)
	{
		l++;r--;
		apos=l;
		bpos=r;
		if(s[l]!=s[r])
			break;
		if(l==r || l==r-1)
		{
			f=true;
			break;
		}
	}

	if(f)
	{
		cout<<s<<endl;
		return;
	}

	string temp,tempr,s1,s2,ans;
	temp=s.substr(apos,bpos-apos+1);
	tempr=temp;
	reverse(all(tempr));
	s1=temp+"#"+tempr;
	s2=tempr+"#"+temp;
	ll clen,alen;
	clen=prefix_function(s1)[prefix_function(s1).size()-1];
	alen=prefix_function(s2)[prefix_function(s2).size()-1];
	if(clen>=alen)
	{
		for(i=0;i<apos;i++)
			ans.pb(s[i]);
		ans+=s.substr(apos,clen);
		for(i=bpos+1;i<n;i++)
			ans.pb(s[i]);
	}
	else
	{
		for(i=0;i<apos;i++)
			ans.pb(s[i]);
		ans+=s.substr(bpos-alen+1,alen);
		for(i=bpos+1;i<n;i++)
			ans.pb(s[i]);
	}
	
	if(ans.length()==0)
		cout<<s[0]<<endl;
	else
		cout<<ans<<endl;
}

int main()
{
	fastio();

	ll T=1;	cin>>T;
	while(T--) solve();
	
	//check_time();
	return 0;   
}   

