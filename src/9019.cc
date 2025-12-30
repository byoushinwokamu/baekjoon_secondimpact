// BOJ 9019
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<string, int> pp;

int ddd(int n) { return (n * 2) % 10000; }
int sss(int n) { return (n + 9999) % 10000; }
int lll(int n) { return (n * 10 + n / 1000) % 10000; }
int rrr(int n) { return (n / 10 + (n % 10) * 1000); }

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int t;
  cin >> t;
  int (*func[4])(int) = {ddd, sss, lll, rrr};
  const char op[5] = "DSLR";
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    queue<pp> q;
    q.push({"", a});
    vector<bool> vis(10000);
    vis[a] = true;
    while (!q.empty())
    {
      pp now = q.front();
      q.pop();
      if (now.se == b)
      {
        cout << now.fi << '\n';
        break;
      }
      for (int i = 0; i < 4; i++)
      {
        int next = func[i](now.se);
        if (!vis[next])
          vis[next] = true, q.push({now.fi + op[i], next});
      }
    }
  }

  return 0;
}
