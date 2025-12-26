// BOJ 1764
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>

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
  string s;
  set<string> nodut;
  vector<string> dbj;
  while (n--)
    cin >> s, nodut.insert(s);
  while (m--)
  {
    cin >> s;
    if (nodut.count(s))
      dbj.push_back(s);
  }
  sort(dbj.begin(), dbj.end());
  cout << dbj.size() << '\n';
  for (auto str : dbj)
    cout << str << '\n';
  return 0;
}
