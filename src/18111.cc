// BOJ 18111
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

// int main()
// {
//   cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
//   int n, m, b;
//   cin >> n >> m >> b;
//   vector<vector<int>> v(n, vector<int>(m));
//   for (int i = 0; i < n; i++)
//     for (int j = 0; j < m; j++)
//       cin >> v[i][j];

//   ll anst = 99999999999, ansh = 0;
//   for (ll mid = 0; mid <= 256; mid++)
//   {
//     ll t = 0, blocks = 0;
//     for (int i = 0; i < n; i++)
//       for (int j = 0; j < m; j++)
//         if (v[i][j] > mid)
//           t += (2 * (v[i][j] - mid)), blocks -= v[i][j] - mid;
//         else
//           t += mid - v[i][j], blocks += mid - v[i][j];

//     if (blocks <= b && anst >= t)
//       ansh = mid, anst = t;
//     if (blocks > b)
//       break;
//   }
//   cout << anst << ' ' << ansh;
//   return 0;
// }

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m, b, mn;
  cin >> n >> m >> b;
  mn = m * n;
  vector<vector<int>> v(n, vector<int>(m));
  vector<int> digtime(257);
  vector<int> filtime(257);
  vector<int> block(257);
  int lowerbound = 256, upperbound = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      cin >> v[i][j];
      for (int h = 0; h <= v[i][j]; h++)
        block[h]++;
      lowerbound = min(lowerbound, v[i][j]);
      upperbound = max(upperbound, v[i][j]);
    }

  ll anst = 99999999999, ansh = 0;
  int bedrock = block[lowerbound];
  for (ll h = lowerbound; h <= upperbound; h++)
  {
    ll todig = 0, tofil = 0;
    for (int i = h + 1; i <= upperbound; i++)
      todig += block[i];
    for (int i = h; i >= lowerbound; i--)
      tofil += mn - block[i];
    ll tt = todig * 2 + tofil;
    ll bb = tofil - todig;
    if (bb > b)
      break;
    if (tt <= anst)
      anst = tt, ansh = h;
  }
  cout << anst << ' ' << ansh;
  return 0;
}