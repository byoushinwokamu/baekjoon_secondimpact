// BOJ 2751
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

// vector sort
// int main()
// {
//   cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
//   int n;
//   cin >> n;
//   vector<int> v(n);
//   for (int i = 0; i < n; i++)
//     cin >> v[i];
//   sort(v.begin(), v.end());
//   for (auto i : v)
//     cout << i << '\n';

//   return 0;
// }

// priority queue
int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, a;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> q;
  for (int i = 0; i < n; i++)
    cin >> a, q.push(a);
  while (!q.empty())
    cout << q.top() << '\n', q.pop();

  return 0;
}