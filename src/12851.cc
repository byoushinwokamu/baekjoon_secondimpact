// BOJ 12851
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
  int n, k;
  cin >> n >> k;
  vector<pp> v(100001); // fi: 최단시간, se: 최단경로개수
  v[n] = {0, 0};
  queue<pp> q; // fi: 위치, se: 시간
  q.push({n, 0});
  while (!q.empty())
  {
    int nowp = q.front().fi;
    int nowt = q.front().se;
    q.pop();

    if (v[nowp].fi != 0 && nowt != v[nowp].fi)
      continue;
    if (nowp == k)
    {
      if (v[k].fi == 0)
        v[k] = {nowt, 1};
      else
        v[k].se++;
    }
    else
    {
      int nextp[3] = {nowp - 1, nowp + 1, nowp * 2};
      for (int i = 0; i < 3; i++)
      {
        if (nextp[i] < 0 || nextp[i] > 100000)
          continue;
        if (v[nextp[i]].fi == nowt + 1)
          v[nextp[i]].se++;
        else if (v[nextp[i]].fi == 0 || v[nextp[i]].fi > nowt + 1)
          v[nextp[i]] = {nowt + 1, 1}, q.push({nextp[i], nowt + 1});
      }
    }
  }
  cout << v[k].fi << '\n'
       << v[k].se;

  return 0;
}
