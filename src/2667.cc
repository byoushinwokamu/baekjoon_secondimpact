// BOJ 2667
#include <algorithm>
#include <iostream>
#include <queue>
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
  vector<string> house(n);
  for (int i = 0; i < n; i++)
    cin >> house[i];

  queue<pp> q;
  priority_queue<int, vector<int>, greater<int>> dj;
  const int dx[] = {1, -1, 0, 0};
  const int dy[] = {0, 0, 1, -1};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      if (house[i][j] != '1')
        continue;
      int hn = 1;
      house[i][j] = '2';
      q.push({i, j});
      while (!q.empty())
      {
        pp now = q.front();
        q.pop();
        for (int d = 0; d < 4; d++)
        {
          pp next = {now.fi + dx[d], now.se + dy[d]};
          if (next.fi >= 0 && next.se >= 0 && next.fi < n && next.se < n)
            if (house[next.fi][next.se] == '1')
            {
              hn++;
              q.push(next);
              house[next.fi][next.se] = '2';
            }
        }
      }
      dj.push(hn);
    }

  cout << dj.size() << '\n';
  while (!dj.empty())
  {
    cout << dj.top() << '\n';
    dj.pop();
  }

  return 0;
}
