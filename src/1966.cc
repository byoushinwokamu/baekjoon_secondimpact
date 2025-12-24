// BOJ 1966
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp; // fi: 중요도, se: 인덱스

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
  {
    queue<pp> q;
    priority_queue<int> pq;
    int n, m, t;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
      cin >> t, q.push({t, i}), pq.push(t);

    for (int p = 1;; p++)
    {
      while (pq.top() != q.front().fi)
        q.push(q.front()), q.pop();
      if (q.front().se == m)
      {
        cout << p << '\n';
        break;
      }
      pq.pop(), q.pop();
    }
  }

  return 0;
}
