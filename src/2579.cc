// BOJ 2579
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
  vector<int> stair(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> stair[i];
  vector<pp> score(n + 1); // fi: 한칸올라옴, se: 두칸올라옴
  score[0] = {0, 0};
  score[1] = {stair[1], 0};
  score[2] = {stair[1] + stair[2], stair[2]};
  for (int i = 3; i <= n; i++)
  {
    score[i].fi = score[i - 1].se + stair[i];
    score[i].se = max(score[i - 2].fi, score[i - 2].se) + stair[i];
  }
  cout << max(score[n].fi, score[n].se);

  return 0;
}
