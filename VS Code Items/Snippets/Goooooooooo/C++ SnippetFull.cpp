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
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef set<ll> si;
typedef set<char> sc;
typedef set<string> ss;

#define pb push_back
#define mp make_pair
#define in insert
#define fi first
#define se second
#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()
#define vecMax(data) *max_element(data.begin(), data.end())
#define vecMin(data) *min_element(data.begin(), data.end())
#define vecSum(data) accumulate(data.begin(), data.end(), 0)

#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define stringLower(data) transform(data.begin(), data.end(), data.begin(), ::tolower)
#define stringUpper(data) transform(data.begin(), data.end(), data.begin(), ::toupper)

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define mod 1000000007
const int mx = 1e8 + 123;
const double eps = 1e-12;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
bitset<mx> is_prime;
vector<int> primes;

void Sieve(int n)
{
    for (int i = 3; i <= n; i += 2)
    {
        is_prime[i] = 1;
    }

    for (int i = 3; (i * i) <= n; i += 2)
    {
        if (is_prime[i])
        {
            for (int j = (i * i); j <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[1] = 0;
    is_prime[2] = 1;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
vector<ll> PrimeFactors;

void PrimeFactorization(ll n)
{
    PrimeFactors.clear();
    // Call Sieve Function First
    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }
        else if (n % p == 0)
        {
            while (n % p == 0)
            {
                PrimeFactors.push_back(p);
                n /= p;
            }
        }
    }
    if (n > 1)
    {
        PrimeFactors.push_back(n);
    }
}
vector<ll> Divisors;

void Divisor(ll n)
{
    Divisors.clear();

    for (int i = 1; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            Divisors.push_back(i);
            if (n / i != i)
            {
                Divisors.push_back(n / i);
            }
        }
    }

    sort(Divisors.begin(), Divisors.end());
}

int NOD(ll n)
{
    // This function will return how many divisors in (n) using Prime Factorization
    int ans = 1;
    // Call Sieve Function First
    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }
        else if (n % p == 0)
        {
            int cnt = 1;
            while (n % p == 0)
            {
                n /= p;
                cnt++;
            }
            ans *= cnt;
        }
    }
    if (n > 1)
    {
        ans *= 2;
    }
    return ans;
}
ll SNOD(ll n)
{
    ll ans = 0, u = sqrt(n);
    for (int i = 1; i <= u; i++)
    {
        ans += (n / i) - i;
    }
    ans *= 2;
    ans += u;
    return ans;
}
ll SODFormula(ll n)
{
    ll ans = 1;
    for (auto p : primes)
    {
        if (1LL * p * p > n)
        {
            break;
        }
        else if (n % p == 0)
        {
            ll CurrentSum = 1, PowerOfPrime = p;
            while (n % p == 0)
            {
                PowerOfPrime *= p;
                n /= p;
            }
            ans *= ((PowerOfPrime - 1) / (p - 1));
        }
    }
    if (n > 1)
    {
        ans *= (n + 1);
    }
    return ans;
}
int EulerPhi(int n)
{
    int ans = n;
    for (auto p : primes)
    {
        if (p * 1LL * p > n)
        {
            break;
        }
        if (n % p == 0)
        {
            ans /= p;
            ans *= (p - 1);
            while (n % p == 0)
            {
                n /= p;
            }
        }
    }

    if (n > 1)
    {
        ans /= n;
        ans *= (n - 1);
    }

    return ans;
}
// void bfs(int src)
// {
//     queue<int> q;
//     q.push(src);
//     color[src] = true;
//     level[src] = 0;
//     while (!q.empty())
//     {
//         int curr = q.front();
//         q.pop();
//         for (auto child : adj[curr])
//         {
//             if (color[child] == 0)
//             {
//                 q.push(child);
//                 level[child] = level[curr] + 1; // current node
//                 color[child] = 1;
//             }
//         }
//     }
// }
// void dfs(int v)
// {
//     vis[v] = 1;
//     // cout<<v<< "->";
//     for (auto child : adj[v])
//     {
//         if (!vis[child])
//             dfs(child);
//     }
// }
void normal(ll &a)
{
    a %= mod;
    (a < 0) && (a += mod);
}
ll modMul(ll a, ll b)
{
    a %= mod, b %= mod;
    normal(a), normal(b);
    return (a * b) % mod;
}
ll modAdd(ll a, ll b)
{
    a %= mod, b %= mod;
    normal(a), normal(b);
    return (a + b) % mod;
}
ll modSub(ll a, ll b)
{
    a %= mod, b %= mod;
    normal(a), normal(b);
    a -= b;
    normal(a);
    return a;
}
ll modPow(ll b, ll p)
{
    ll r = 1;
    while (p)
    {
        if (p & 1)
        {
            r = modMul(r, b);
        }
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
ll modInverse(ll a)
{
    return modPow(a, mod - 2);
}
ll modDiv(ll a, ll b)
{
    return modMul(a, modInverse(b));
}

void Boom()
{
}

int main()
{
    Boost;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
