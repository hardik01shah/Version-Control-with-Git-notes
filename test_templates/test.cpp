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
#define vbool vector<bool>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define pb push_back

#define showd(a) for(auto k:a) cout<<k<<" ";cout<<endl;
#define show(x) cout<<#x<<" "<<x<<endl;
#define show2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define show3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;

ll power(ll x,ll y,ll p ){ll res=1;x%=p;while(y>0){if(y&1)res=(res*x)%p;y=y>>1;x=(x*x)%p;}return res;}
ll lcm(ll a , ll b){return (a*b)/__gcd(a,b);}

//ctrl+shift+b to kill

void solve()
{
	ll n,i;
	cin>>n;
	vll a(n),t(n,0);
	ll sum=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(i)
		t[i]=t[i-1]+i;		
	}
	bool f=0;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(t[i]>sum)
		{
			f=1;
			break;
		}
	}
	if(f)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	fastio();

	ll T=1;	cin>>T;
	while(T--) solve();
	
	//check_time();
	return 0;   
}   
