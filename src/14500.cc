// BOJ 14500
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

// 칸 번호
// 0 1 2 3
// 4 5 6
// 7 8
// 9

const int dx[10] = {0, 1, 2, 3, 0, 1, 2, 0, 1, 0};
const int dy[10] = {0, 0, 0, 0, 1, 1, 1, 2, 2, 3};
const vector<vector<int>> dd = {{0, 1, 2, 3}, {0, 4, 7, 9}, {0, 1, 4, 5}, {0, 1, 2, 4}, {0, 1, 2, 5}, {0, 1, 2, 6}, {0, 4, 5, 6}, {1, 4, 5, 6}, {2, 4, 5, 6}, {0, 1, 5, 6}, {1, 2, 4, 5}, {0, 1, 4, 7}, {0, 4, 5, 7}, {0, 4, 7, 8}, {0, 1, 5, 8}, {1, 4, 5, 8}, {1, 5, 7, 8}, {0, 4, 5, 8}, {1, 4, 5, 7}};

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> v[i][j];

  int ms = 0;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
    {
      int s = 0;
      for (auto dv : dd)
      {
        bool cor = true;
        s = 0;
        for (int d : dv)
        {
          if (i + dx[d] >= n || j + dy[d] >= m)
          {
            cor = false;
            break;
          }
          s += v[i + dx[d]][j + dy[d]];
        }
        if (cor)
          ms = max(ms, s);
      }
    }

  cout << ms;

  return 0;
}
