// BOJ 2630
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int n;
int wt, bt;
vector<vector<bool>> paper;

void cut(int r1, int r2, int c1, int c2)
{
  if (r1 == r2)
  {
    paper[r1][c1] ? bt++ : wt++;
    return;
  }

  int w = 0, b = 0;
  int t = (c2 - c1) * (r2 - r1);
  int d = (r2 - r1) / 2;

  for (int i = r1; i < r2; i++)
    for (int j = c1; j < c2; j++)
      paper[i][j] ? b++ : w++;
  if (w == t)
    wt++;
  else if (b == t)
    bt++;
  else
  {
    cut(r1, r2 - d, c1, c2 - d);
    cut(r1, r2 - d, c1 + d, c2);
    cut(r1 + d, r2, c1, c2 - d);
    cut(r1 + d, r2, c1 + d, c2);
  }
}

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int a;
  cin >> n;
  paper.resize(n);
  for (int i = 0; i < n; i++)
  {
    paper[i].resize(n);
    for (int j = 0; j < n; j++)
    {
      cin >> a;
      paper[i][j] = a == 1;
    }
  }
  cut(0, n, 0, n);
  cout << wt << '\n'
       << bt;

  return 0;
}
