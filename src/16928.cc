// BOJ 16928
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m, x, y;
  cin >> n >> m;
  vector<int> v(101);
  for (int i = 0; i < n + m; i++)
    cin >> x >> y, v[x] = (y);

  queue<pp> q; // fi: 칸, se: 주사위 굴린 횟수
  vector<bool> vis(101);
  q.push({1, 0});
  vis[1] = true;
  while (!q.empty())
  {
    int nowc = q.front().fi;
    int nowt = q.front().se;
    q.pop();
    if (nowc == 100)
    {
      cout << nowt;
      break;
    }
    for (int i = 1; i <= 6; i++)
    {
      int next = (v[nowc + i] ? v[nowc + i] : nowc + i);
      if (!vis[next])
        q.push({next, nowt + 1}), vis[next] = true;
    }
  }

  return 0;
}
