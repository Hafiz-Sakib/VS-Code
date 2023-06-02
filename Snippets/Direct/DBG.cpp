// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
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
typedef set<char> sc;
typedef set<string> ss;
typedef set<double> sd;
typedef priority_queue<ll> pq;
typedef priority_queue<string> pqs;
typedef priority_queue<ll, vi, greater<ll>> pqg;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define lb lower_bound
#define ub upper_bound

#define left(node) (node * 2)
#define mid(l, r) ((r + l) >> 1)
#define right(node) (node * 2 + 1)

#define b() begin()
#define e() end()
#define sz(x) (int)x.size()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define Reverse(data) reverse(data.begin(), data.end())
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)
#define vecCount(data, key) count(data.begin(), data.end(), key)

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"

#define setp(n) fixed << setprecision(n)
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem(arr, val) memset(arr, val, sizeof(arr));
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define FOR(data) for (auto it = data.begin(); it != data.end(); it++)
#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) / gcd(a, b) * (b))
#define sqr(a) ((a) * (a))
#define mod 1000000007
#define mx_int_prime 999999937

const double PI = acos(-1);
const int mx = 1e8 + 123;
const double eps = 1e-12;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// Debugger Started
#define here fprintf(stderr, "====I am Here====\n");
template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define debug(args...)          \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}
// Debugger Ends

void Boom()
{
    // Let's Move
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<<t<<" : ";
        Boom();
    }

    return 0;
}
