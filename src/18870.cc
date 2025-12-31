// BOJ 18870
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
  vector<int> v(n);

  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<int> vp(v);
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  for (auto i : vp)
    cout << (lower_bound(v.begin(), v.end(), i) - v.begin()) << ' ';

  return 0;
}
