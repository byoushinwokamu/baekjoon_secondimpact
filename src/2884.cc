// BOJ 2884
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
  int h, m;
  cin >> h >> m;
  m -= 45;
  if (m < 0)
    m += 60, h -= 1;
  if (h < 0)
    h += 24;
  cout << h << ' ' << m;
  return 0;
}
