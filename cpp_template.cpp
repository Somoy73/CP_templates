/* 
 * Author: Somoy
 * This CPP code is a helpful template for Fast solving certain problems
 * The code is not meant to be used in Production
 */

// #define FAST_EXECUTION
// #define INTERACTIVE_MODE

// Not efficient for production use/ many compilers won't support
#include <bits/stdc++.h>

using namespace std;

// ===== CONSTANTS =====
const long long INF = 9223372036854775807;
const long long MOD = 1e9 + 7;
const int N = 1e9;

// ===== TYPE ALIASES =====
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef map<int,int> mii;
typedef unordered_map<int,int> umii;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef string str;

// ===== FAST I/O =====
void fastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

// ===== DEBUG MACROS =====
#ifndef ONLINE_JUDGE
#define WATCH(key, val) \
    cout << "Watched " << key << " -> " << val << "\n";
#define WATCH_CONTAINER(key, val) \
    cout << "Watched " << key << " : "; \
    for (auto e : val) cout << " " << e; \
    cout << "\n";
#define WATCH_MAP(map) \
    cout << "Watching Map\n"; \
    for (auto e : map) \
        cout << e.first << " -> " << e.second << "\n"; \
    cout << "\n";
#else
#define WATCH(key, val) do {} while (false);
#define WATCH_CONTAINER(key, val) do {} while (false);
#define WATCH_MAP(map) do {} while (false);
#endif

// ===== COMPILER OPTIMIZATIONS =====
#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

// ===== LOOP MACROS =====
#define rep(a,b) for(int i=a; i<b; ++i)
#define repl(a,b) for(ll i = a; i<(ll)b; ++i)
#define REP(n) for(int t=0; t<n; t++)
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FFOR(i, j, n) for(int i = j; i < n; i++)
#define FOR_S(i, n, k) for (int i = 0; i < n; i += k)
#define RFOR(i, n) for (int i = n - 1; i >= 0; i--)
#define RFOR_S(i, n, k) for (int i = n - 1; i >= 0; i -= k)

// ===== UTILITY MACROS =====
#define pb(x) push_back(x)
#define eb emplace_back
#define m_p(x,y) make_pair(x,y)
#define mem(a,x) memset(a,x,sizeof(a))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()

// ===== MATHEMATICAL MACROS =====
#define MAX_OF(x, y) ((x > y) ? x : y)
#define MIN_OF(x, y) ((x > y) ? y : x)
#define MIN_IN(A) *(min_element(all(A)))
#define MAX_IN(A) *(max_element(all(A)))
#define MAX_AT(A) (max_element(all(A)) - A.begin())
#define MIN_AT(A) (min_element(all(A)) - A.begin())
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a)*((b)/__gcd(a,b)))

// ===== CONTAINER OPERATIONS =====
#define SORT(A) sort(all(A))
#define RSORT(A) sort(rall(A))
#define REVERSE(A) reverse(all(A))
#define UNIQUE(A) A.erase(unique(all(A)), A.end())

// ===== CONDITIONAL CHECKS =====
#define ANY(container, result, condition) \
    result = false; \
    for (const auto &e : container) \
        if (condition(e)) { \
            result = true; \
            break; \
        }

#define ALL(container, result, condition) \
    result = true; \
    for (const auto &e : container) \
        if (!condition(e)) { \
            result = false; \
            break; \
        }

// ===== I/O MACROS =====
#ifdef INTERACTIVE_MODE
#define iprint(...) printf(__VA_ARGS__); fflush(stdout);
#else
#define iprint(...) printf(__VA_ARGS__);
#endif

#define TESTCASE \
    int testcase; \
    cin >> testcase; \
    while(testcase--)

// ===== MATHEMATICAL FUNCTIONS =====
ll power(ll x, ull y, ll mod = MOD) {
    ll res = 1;
    x = x % mod; 
    while (y > 0) {  
        if (y & 1) 
            res = (res * x) % mod;  
        y = y >> 1;
        x = (x * x) % mod;   
    } 
    return res; 
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

// ===== DATA STRUCTURES =====
struct Node {
    ll data;
    Node* next;
    Node(ll val = 0) : data(val), next(nullptr) {}
};

// ===== MAIN FUNCTION =====
int main(){
    fastIO();
    
    // Your code here
    
    return 0;
}

/*
 * NOTES:
 * - REP(n) leaks 't' variable of integer type for index
 * - rep(a,b) and repl(a,b) leak 'i' variable for index
 * - Use WATCH macros for debugging (disabled in online judges)
 * - fastIO() speeds up cin/cout operations
 * - Node struct ready for linked list problems
 */
