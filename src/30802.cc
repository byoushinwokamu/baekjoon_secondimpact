// BOJ 30802
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
  int siz[6];
  int t, p;
  cin >> siz[0] >> siz[1] >> siz[2] >> siz[3] >> siz[4] >> siz[5];
  cin >> t >> p;

  int tt = 0, pp = 0;
  for (auto i : siz)
    tt += (i - i % t) / t + (i % t ? 1 : 0);
  pp = n - n / p * p;
  cout << tt << '\n';
  cout << n / p << ' ' << pp;

  return 0;
}
