// BOJ 2577
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
  ll a, b, c, p;
  cin >> a >> b >> c;
  p = a * b * c;
  string s = to_string(p);
  vector<int> v(10);
  for (auto ch : s)
    v[ch - '0']++;
  for (auto i : v)
    cout << i << '\n';

  return 0;
}
