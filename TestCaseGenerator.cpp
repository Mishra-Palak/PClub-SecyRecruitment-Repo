#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%d", &n)
#define p(n) printf("%d", n)
#define nl printf("\n")
#define F first
#define S second
#define PUSH push_back
#define POP pop_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define PER(i, a, b) for (int i = a; i < b; --i)
typedef uint64_t ull;      //format-specifier - %lu
typedef long long ll;      //format-specifier - %lld
typedef long double dl;    //format-specifier - %Lf / %llf (For double, it is %lf)
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef pair<ll, ll> pi;
typedef map<ll, ll> mi;
#define MAX 1000000000000000000
#define MIN -1000000000000000000
#define RANGE 2000000000000000000
 
int main() {
    freopen("TC.in", "w", stdout);
 
    srand(time(NULL));
    int t = 1 + rand() % 100;
    cout << t << "\n";
    REP (i, 0, t) {
        ll a = 1 + rand() % 1000000;
        ll b = 1 + rand() % 1000000;
        ll c = 1 + rand() % 2000000;
        ll r = a * b * c;
        if (r > MAX) {
            r = MAX - r;
        }
        cout << r << "\n";
    }
 
    fclose(stdout);
}
