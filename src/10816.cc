// BOJ 10816
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

// umap
// int main()
// {
//   cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
//   int n, m, t;
//   cin >> n;
//   unordered_map<int, int> um;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> t;
//     um[t]++;
//   }
//   cin >> m;
//   for (int i = 0; i < m; i++)
//   {
//     cin >> t;
//     cout << um[t] << ' ';
//   }

//   return 0;
// }

// vector
int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m, t;
  cin >> n;
  vector<int> v(20000001);
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    v[t + 10000000]++;
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> t;
    cout << v[t + 10000000] << ' ';
  }

  return 0;
}
