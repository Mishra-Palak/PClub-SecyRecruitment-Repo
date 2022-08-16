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
#define MAX INT_MAX
#define MIN INT_MIN
typedef uint64_t ull;      //format-specifier - %lu
typedef long long ll;      //format-specifier - %lld
typedef long double dl;    //format-specifier - %Lf / %llf (For double, it is %lf)
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef pair<ll, ll> pi;
typedef map<ll, ll> mi;

void solve(ll n) {
    if (n >= -9 && n <= 9) {
        cout << "NULL" << "\n";
        return ;
    }
    
    ll m;
    if (n < 0) {
        m = 0LL - n;
    } else {
        m = n;
    }
    vi digits;
    while(m) {
        digits.PUSH(m % 10LL);
        m /= 10LL;
    }
    
    if (n < 0) {
        sort(digits.begin(), digits.end(), greater <ll>());
        digits.POP();
    } else {
        sort(digits.begin(), digits.end());
        digits.POP();
    }
    if (n < 0) {
        cout << "-";
    } else {
        if (digits[0] == 0) {
            int i = 1;
            while (digits[i] == 0) {
                ++i;
            }
            swap(digits[i], digits[0]);
        }
    }
    
    REP(i, 0, digits.size()) {
        cout << digits[i];
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        solve(n);
    }
}