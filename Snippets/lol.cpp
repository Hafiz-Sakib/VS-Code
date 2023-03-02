#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
typedef vector<pair<string, ll>> vpsi;
typedef pair<ll, ll> pii;
typedef pair<string, ll> psi;
typedef pair<ll, string> pis;
typedef pair<double, double> pdd;
typedef map<ll, ll> mii;
typedef map<ll, bool> mib;
typedef map<string, ll> msi;
typedef map<ll, string> mis;
typedef set<ll> si;
typedef set<string> ss;
typedef set<double> sd;

#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define F first
#define S second
#define space ' '

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define sz(x) (int)x.size()
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)
#define vecCount(data, key) count(data.begin(), data.end(), key)
#define Reverse(data) reverse(data.begin(), data.end())

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define gcd(a, b) __gcd(a, b)
#define sqr(a) ((a) * (a))
#define MOD 1000000007
#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ok = n - 1;
    for (int i = 1; i < n - 1; i++)
    {
        char c = s[i];
        if (s[i - 1] == s[i + 1])
        {
            ok--;
        }
    }
    cout << ok << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
