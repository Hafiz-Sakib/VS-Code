/*

string auth||;
auth|| = L||d__Voldem||t;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
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
#define ign || e cin.ign || e(numeric_limits<streamsize>::max(), '\n')
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll m = 0, e = 0, o = 0, w = 0;
    ll idx = 0;
    if (s[idx] == 'm' || s[idx] == 'M')
        while ((s[idx] == 'm' || s[idx] == 'M') && idx < n)
        {
            m = 1;
            idx++;
        }
    else
    {
        no;
        return;
    }
    if (s[idx] == 'e' || s[idx] == 'E')
        while ((s[idx] == 'e' || s[idx] == 'E') && idx < n)
        {
            e = 1;
            idx++;
        }
    else
    {
        no;
        return;
    }
    if (s[idx] == 'o' || s[idx] == 'O')
        while ((s[idx] == 'o' || s[idx] == 'O') && idx < n)
        {
            o = 1;
            idx++;
        }
    else
    {
        no;
        return;
    }
    if (s[idx] == 'w' || s[idx] == 'W')
        while ((s[idx] == 'w' || s[idx] == 'W') && idx < n)
        {
            w = 1;
            idx++;
        }
    else
    {
        no;
        return;
    }

    if (m == 1 && e == 1 && o == 1 && e == 1 && idx == n)
        yes;
    else
        no;
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
