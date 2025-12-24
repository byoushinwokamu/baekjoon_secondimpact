// BOJ 10814
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, string> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pp> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i].fi >> v[i].se;
  stable_sort(v.begin(), v.end(), [](auto a, auto b)
              { return a.fi < b.fi; });
  for (auto p : v)
    cout << p.fi << ' ' << p.se << '\n';

  return 0;
}
