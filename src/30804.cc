// BOJ 30804
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
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<int> use(10);
  int maxlen = 0;

  int lft = 0;
  int used = 1;
  use[v[lft]]++;
  for (int rht = lft + 1; rht < n; rht++)
  {
    if (use[v[rht]]++ == 0)
      used++;

    if (used > 2)
    {
      maxlen = max(maxlen, rht - lft);
      for (lft; lft < rht; lft++)
      {
        if (--use[v[lft]] == 0)
          used--;
        if (used <= 2)
        {
          lft++;
          break;
        }
      }
    }
  }

  maxlen = max(maxlen, n - lft);

  cout << maxlen;

  return 0;
}
