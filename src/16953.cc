// BOJ 16953
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<ll, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int a, b;
  cin >> a >> b;

  queue<pp> q; // fi: num, se: 연산수
  q.push({a, 1});
  while (!q.empty())
  {
    pp now = q.front();
    q.pop();
    if (now.fi == b)
    {
      cout << now.se;
      return 0;
    }
    else if (now.fi > b)
      continue;

    q.push({now.fi * 2, now.se + 1});
    q.push({now.fi * 10 + 1, now.se + 1});
  }
  cout << -1;

  return 0;
}
