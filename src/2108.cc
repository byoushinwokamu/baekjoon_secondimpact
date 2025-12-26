// BOJ 2108
#include <cmath>
#include <unordered_map>
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
  int avg = 0;
  vector<int> v(n);
  vector<pp> vn(8001); // fi: index, se: appearance
  for (int i = 0; i < 8001; i++)
    vn[i].fi = i - 4000;

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    avg += v[i];
    vn[v[i] + 4000].se++;
  }

  sort(v.begin(), v.end());
  sort(vn.begin(), vn.end(), [](auto a, auto b)
       { return a.se == b.se ? a.fi < b.fi : a.se > b.se; });

  cout << (int)round((double)avg / n) << '\n';
  cout << v[n / 2] << '\n';
  cout << (vn[0].se == vn[1].se ? vn[1].fi : vn[0].fi) << '\n';
  cout << (*v.rbegin() - *v.begin());

  return 0;
}
