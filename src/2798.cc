// BOJ 2798
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

// Brute force
// int main()
// {
//   cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
//   int n, m;
//   cin >> n >> m;
//   vector<int> cards(n);
//   for (int i = 0; i < n; i++)
//     cin >> cards[i];

//   int q = 0;
//   for (int i = 0; i < n - 2; i++)
//     for (int j = i + 1; j < n - 1; j++)
//       for (int k = j + 1; k < n; k++)
//         if (cards[i] + cards[j] + cards[k] <= m)
//           q = max(q, cards[i] + cards[j] + cards[k]);

//   cout << q;

//   return 0;
// }

// Backtracing
vector<int> cards;
int n, m;
int q = 0;
void dfs(int depth, int now, int s)
{
  if (depth == 3)
    q = max(s, q);
  else
  {
    for (int i = now + 1; i < n; i++)
      if (s + cards[i] <= m)
        dfs(depth + 1, i, s + cards[i]);
  }
}
int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  cin >> n >> m;
  cards.resize(n);
  for (int i = 0; i < n; i++)
    cin >> cards[i];
  dfs(0, -1, 0);
  cout << q;

  return 0;
}