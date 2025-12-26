// BOJ 11723
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
  int set = 0;
  int m, a;
  string s;
  cin >> m;
  while (m--)
  {
    cin >> s;
    if (s == "add")
      cin >> a, set |= (1 << a);
    else if (s == "remove")
      cin >> a, set &= ~(1 << a);
    else if (s == "check")
      cin >> a, cout << ((set & (1 << a)) ? 1 : 0) << '\n';
    else if (s == "toggle")
      cin >> a, set ^= (1 << a);
    else if (s == "all")
      set = 0xffffff;
    else if (s == "empty")
      set = 0;
  }

  return 0;
}
