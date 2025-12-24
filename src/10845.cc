// BOJ 10845
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
  string op;
  int n, t, b;
  queue<int> q;
  cin >> n;
  while (n--)
  {
    cin >> op;
    if (op == "push")
      cin >> t, q.push(t), b = t;
    else if (op == "pop")
      if (q.empty())
        cout << "-1\n";
      else
        cout << q.front() << '\n', q.pop();
    else if (op == "size")
      cout << q.size() << '\n';
    else if (op == "empty")
      cout << q.empty() << '\n';
    else if (op == "front")
      if (q.empty())
        cout << "-1\n";
      else
        cout << q.front() << '\n';
    else if (op == "back")
      if (q.empty())
        cout << "-1\n";
      else
        cout << b << '\n';
  }

  return 0;
}
