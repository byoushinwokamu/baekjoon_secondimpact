// BOJ 1018
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

vector<string> pb = {
    "WBWBWBWBWB",
    "BWBWBWBWBW",
    "WBWBWBWBWB",
    "BWBWBWBWBW",
    "WBWBWBWBWB",
    "BWBWBWBWBW",
    "WBWBWBWBWB",
    "BWBWBWBWBW",
};

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<string> board(n);
  for (int i = 0; i < n; i++)
    cin >> board[i];

  int minrecol = m * n;
  for (int rs = 0; rs + 7 < n; rs++)
    for (int cs = 0; cs + 7 < m; cs++)
    {
      int recol[2] = {0, 0};
      for (int rd = 0; rd < 8; rd++)
        for (int cd = 0; cd < 8; cd++)
          recol[(board[rs + rd][cs + cd] == pb[rd][cd]) ? 0 : 1]++;

      minrecol = min(minrecol, min(recol[0], recol[1]));
    }

  cout << minrecol;

  return 0;
}
