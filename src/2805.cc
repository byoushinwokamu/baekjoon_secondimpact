// BOJ 2805
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
  cin >> n >> m;
  vector<ll> tree(n);
  for (int i = 0; i < n; i++)
    cin >> tree[i];
  sort(tree.begin(), tree.end());

  ll lft = tree[0], rht = tree[n - 1];
  ll ans = 0;
  for (ll mid = (lft + rht) / 2; lft <= rht; mid = (lft + rht) / 2)
  {
    ll ac = 0;
    for (auto t : tree)
      ac += (t > mid) ? (t - mid) : 0;
    if (ac >= m) // 많거나 같음: 더 높여도 됨
      lft = mid + 1, ans = mid;
    else // 적음: 더 낮춰야됨
      rht = mid - 1;
  }
  cout << ans;

  return 0;
}
