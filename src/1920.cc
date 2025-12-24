// BOJ 1920
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

// Just linear search
// Time Over
// int main()
// {
//   cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
//   int n, m, t;
//   cin >> n;
//   vector<int> v(n);
//   for (int i = 0; i < n; i++)
//     cin >> v[i];
//   cin >> m;
//   for (int i = 0; i < m; i++)
//   {
//     cin >> t;
//     bool found = false;
//     for (auto ii : v)
//     {
//       if (ii == t)
//       {
//         found = true;
//         break;
//       }
//     }
//     cout << (found ? "1\n" : "0\n");
//   }
//   return 0;
// }

// Binary search
int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m, t;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> t;
    cout << (binary_search(v.begin(), v.end(), t) ? "1\n" : "0\n");
  }
  return 0;
}
