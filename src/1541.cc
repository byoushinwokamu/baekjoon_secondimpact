// BOJ 1541
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
  string exp;
  cin >> exp;
  int acc = 0, now = 0;
  bool minus = false;
  for (auto c : exp)
  {
    if (isdigit(c))
      now *= 10, now += c - '0';
    else
    {
      acc += minus ? -now : now, now = 0;
      if (c == '-')
        minus = true;
    }
  }
  cout << acc + (minus ? -now : now);

  return 0;
}
