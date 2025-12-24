// BOJ 7568
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
  vector<pp> dc(n);
  for (int i = 0; i < n; i++)
    cin >> dc[i].fi >> dc[i].se;

  for (int i = 0; i < n; i++)
  {
    int rank = 1;
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      if (dc[i].fi < dc[j].fi && dc[i].se < dc[j].se)
        rank++;
    }
    cout << rank << ' ';
  }

  return 0;
}
