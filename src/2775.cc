// BOJ 2775
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
  int t, k, n;
  cin >> t;
  while (t--)
  {
    cin >> k >> n;
    vector<int> room(n + 1);
    for (int i = 1; i <= n; i++)
      room[i] = i;
    for (int fl = 1; fl <= k; fl++)
      for (int ro = 1; ro <= n; ro++)
        room[ro] = room[ro - 1] + room[ro];
    cout << room[n] << '\n';
  }

  return 0;
}
