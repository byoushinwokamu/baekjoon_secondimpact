// BOJ 10814
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp; // fi: index, se: age

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pp> v(n);
  vector<string> name(n);
  for (int i = 0; i < n; i++)
    v[i].fi = i, cin >> v[i].se >> name[i];
  sort(v.begin(), v.end(), [](auto a, auto b)
       { return a.se == b.se ? a.fi < b.fi : a.se < b.se; });
  for (auto p : v)
    cout << p.se << ' ' << name[p.fi] << '\n';

  return 0;
}
