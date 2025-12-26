// BOJ 11286
#include <algorithm>
#include <iostream>
#include <string>
#include <queue>
#include <vector>

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
  auto cmp = [](int a, int b)
  { return abs(a) == abs(b) ? a > b : abs(a) > abs(b); };
  priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
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
      {
        cout << pq.top() << '\n';
        pq.pop();
      }
    }
  }

  return 0;
}
