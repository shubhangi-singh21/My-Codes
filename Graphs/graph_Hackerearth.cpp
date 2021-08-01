//Utkarsh has recently put on some weight. In order to lose weight, he has to run on boundary of gardens.
//But he lives in a country where there are no gardens. There are just many bidirectional roads between cities.
//Due to the situation, he is going to consider any cycle of length four as a garden. Formally a garden is considered to be a unordered set of 4 roads {r0, r1, r2, r3} where ri and ri+1 mod 4 share a city.

//Now he wonders how many distinct gardens are there in this country.
/*Input format:
The first integer contains N, the number of cities in the country.
It is followed by space separated elements of N*N binary matrix G.
G[i][j] = 1 denotes there is a road between ith city and jth city.
A pair of cities has atmost one road connecting them.
No road connects a city to itself.
G is symmetric.*/

//Output format:
//Print the total number of gardens.

#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	bitset<2010> bit[2010];
	cin>>n;
	rep(i,0,n){
		rep(j,0,n){
			cin>>a;
			bit[i][j]=a;
		}
	}
	r=0;
	rep(i,0,n){
		rep(j,i+1,n){
			x=(bit[i]&bit[j]).count();
			r+=(x*(x-1))/2;
		}
	}
	cout<<r/2;
	return 0;
}

