// BOJ 1931
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pp> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].fi >> v[i].se;
  sort(v.begin(), v.end(), [](auto a, auto b)
       { return a.se == b.se ? a.fi < b.fi : a.se < b.se; });

  int t = 0, conf = 0;
  for (int vcur = 0; vcur < n; vcur++)
  {
    while (vcur < n && v[vcur].fi < t)
      vcur++;
    if (vcur >= n)
      break;
    t = v[vcur].se;
    conf++;
  }
  cout << conf;

  return 0;
}
