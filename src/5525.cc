// BOJ 5525
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
  int n, m;
  string s;
  cin >> n >> m >> s;

  int lft = 0, rht = 0, pn = 0, pnn = 0;
  for (; lft <= rht && rht < m;)
  {
    pn = 0;
    if (s[lft] == 'O')
    {
      rht = ++lft;
      continue;
    }

    for (rht += 2; rht < m; rht += 2)
    {
      if (s[rht - 1] == 'O' && s[rht] == 'I')
      {
        pn++;
      }
      else
      {
        // cout << lft << ' ' << rht << ' ' << pn << endl;
        lft = --rht;
        break;
      }
    }
    if (pn >= n)
      pnn += pn - n + 1;
  }
  cout << pnn;

  return 0;
}
