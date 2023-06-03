/* ------------------------------ include ------------------------------ */
#include <bits/stdc++.h>
// #include <atcoder/modint>
// #include <boost/multiprecision/cpp_int.hpp>
/* ------------------------------  using  ------------------------------ */
using namespace std;
// using namespace atcoder;
// using namespace boost::multiprecision;
/* ------------------------------  define ------------------------------ */
#define all(container) (container).begin(), (container).end()
#define ctoi(char) int(char) - 48
#define rep(i,n) for (int i = 0; (i) < (int)(n); ++ (i))
#define rep3(i,m,n) for (int i = (m); (i) < (int)(n); ++ (i))
#define per(i,n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define per3(i,m,n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
// #define int long long
/* ------------------------------ function ------------------------------*/
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
template<typename T> T lcm(T a, T b) {return a / gcd(a, b) * b;}
/* ------------------------------  const  ------------------------------ */
constexpr double PI = acos(-1.0);
constexpr int dx[4] = {1, 0, -1, 0};
constexpr int dy[4] = {0, 1, 0, -1};
constexpr long long  MOD = 1000000007;
constexpr long long _MOD = 998244353;
/* ------------------------------   code  ------------------------------ */

vector<double> sugarwater;

signed main ()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n, m, k; cin >> n >> m >> k;
  vector<int> a(n), b(n), c(m), d(m);
  rep(i, n) cin >> a[i] >> b[i];
  rep(i, m) cin >> c[i] >> d[i];

  for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < m; ++j)
	{
	  double x = a[i] + c[j];
	  double y = b[i] + d[j];
	  double value = 100 * x / (x + y);
	  sugarwater.emplace_back(value);
	}
    }

  sort(all(sugarwater), greater<int>());

  cout << sugarwater[k - 1] << endl;
  
  return 0;
}
