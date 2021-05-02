#include<bits/stdc++.h>

using namespace std;

#define ld long double
#define ll long long int
#define endl '\n'
#define check_time() cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
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

ll p=0;
vll g[100001];
vector<bool> vis(100001,false);
void dfs(ll cur)
{
	p++;
	vis[cur]=true;
	for(auto nxt:g[cur])
	{
		if(!vis[nxt])
			dfs(nxt);
	}
}
void solve()
{
	ll n,k,i,ans=0;
	ll a,b;bool c;
	cin>>n>>k;
	ll tot;
	show2(n,k);
	tot=pow(n,k);
	show(tot);
	for(i=1;i<=n-1;i++)
	{
		cin>>a>>b>>c;
		if(!c)
		{
			g[a].pb(b);
			g[b].pb(a);
		}
	}
	ll cur;
	for(cur=1;cur<=n-1;cur++)
	{
		ans+=pow(p,k);
		p=0;
		if(!vis[cur])
			dfs(cur);
	}
	cout<<tot-ans<<endl;
}

int main()
{
	fastio();

	ll T=1;	//cin>>T;
	while(T--) solve();
	
	//check_time();
	return 0;   
}   

