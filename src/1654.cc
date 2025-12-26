// BOJ 1654
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
  int k, n;
  cin >> k >> n;
  vector<int> cable(k);
  for (int i = 0; i < k; i++)
    cin >> cable[i];
  sort(cable.begin(), cable.end());

  ll lft = 1, rht = cable[k - 1];
  ll mid = (lft + rht) / 2;
  ll ans = 0;
  for (mid; lft <= rht; mid = (lft + rht) / 2)
  {
    ll cn = 0;
    for (auto i : cable)
      cn += i / mid;
    // cout << "LEFT " << lft << " MIDDLE " << mid << " RIGHT " << rht << endl;
    // cout << "CNT " << cn << endl;

    if (cn < n) // 부족: 더 짧아야 함
      rht = mid - 1;
    else if (cn >= n) // 같거나 남음: 늘려보기
      ans = mid, lft = mid + 1;
  }
  cout << ans;

  return 0;
}
