// BOJ 11866
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
  queue<int> q;
  for (int i = 1; i <= n; i++)
    q.push(i);

  cout << '<';
  while (q.size() > 1)
  {
    for (int i = 1; i < k; i++)
      q.push(q.front()), q.pop();
    cout << q.front() << ", ", q.pop();
  }
  cout << q.front() << '>';

  return 0;
}
