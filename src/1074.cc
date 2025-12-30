// BOJ 1074
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
  int r, c, n;
  cin >> n >> r >> c;
  int quarter = 1 << ((n - 1) << 1);
  int border = 1 << (n - 1);

  int v = 0;
  while (n--)
  {
    if (r >= border)
      r -= border, v += quarter << 1;
    if (c >= border)
      c -= border, v += quarter;
    quarter >>= 2, border >>= 1;
  }
  cout << v;

  return 0;
}
