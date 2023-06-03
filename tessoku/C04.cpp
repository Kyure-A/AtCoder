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
#define ctoi(char) int(char) - '0'
#define rep(i,n) for (int i = 0; (i) < (int)(n); ++ (i))
#define per(i,n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
// #define int long long
/* ------------------------------ function ------------------------------*/
template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
/* ------------------------------  const  ------------------------------ */
constexpr double PI = acos(-1.0);
constexpr int dx[4] = {1, 0, -1, 0};
constexpr int dy[4] = {0, 1, 0, -1};
constexpr long long  MOD = 1000000007;
constexpr long long _MOD = 998244353;
/* ------------------------------   code  ------------------------------ */

set<long long> calcDiv (long long n)
{
  long long sqn = sqrt(n);
  set<long long> ans;
  ans.insert(1);
  
  for (long long i = 2; i <= sqn; ++i)
    {
      if (n % i == 0)
	{
	  ans.insert(i);
	  ans.insert(*ans.rbegin() * i);
	}
    }

  return ans;
}

signed main ()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long n; cin >> n;
  set<long long> ans = calcDiv(n);

  for (auto div : ans)
    {
      cout << div << endl;
    }

  return 0;
}
