// BOJ 15829
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

const ll r = 31, m = 1234567891;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

  ll h = 0;
  ll ri = 1;
  ll l;
  string s;
  cin >> l >> s;
  for (auto c : s)
  {
    h += (c - 96) * ri % m;
    h %= m;
    ri *= r;
    ri %= m;
  }
  cout << h;

  return 0;
}
