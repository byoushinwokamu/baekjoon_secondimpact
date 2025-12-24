// BOJ 10773
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
  vector<int> v(100000);
  int k, cur = 0;
  cin >> k;
  while (k--)
    cin >> v[cur], v[cur] ? cur++ : cur--;
  int s = 0;
  for (int i = 0; i < cur; i++)
    s += v[i];
  cout << s;

  return 0;
}
