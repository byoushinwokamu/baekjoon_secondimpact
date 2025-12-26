// BOJ 11279
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
  int n, x;
  cin >> n;
  priority_queue<int> pq;
  while (n--)
  {
    cin >> x;
    if (x)
      pq.push(x);
    else
    {
      if (pq.empty())
        cout << "0\n";
      else
        cout << pq.top() << '\n', pq.pop();
    }
  }

  return 0;
}
