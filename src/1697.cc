// BOJ 1697
#include <queue>
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
  int n, k;
  cin >> n >> k;
  vector<int> tim(100001, -1);
  queue<int> q;
  q.push(n);
  tim[n] = 0;
  while (!q.empty())
  {
    int now = q.front();
    q.pop();
    if (now == k)
    {
      cout << tim[now];
      return 0;
    }
    int next[3] = {now + 1, now - 1, now * 2};
    for (int i = 0; i < 3; i++)
    {
      if (next[i] < 0 || next[i] > 100000)
        continue;
      if (tim[next[i]] == -1)
        q.push(next[i]), tim[next[i]] = tim[now] + 1;
    }
  }

  return 0;
}
