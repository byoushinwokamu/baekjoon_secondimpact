// BOJ 1620
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

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
  unordered_map<string, int> namemap;
  unordered_map<int, string> nomap;

  string name;
  for (int no = 1; no <= n; no++)
  {
    cin >> name;
    namemap[name] = no;
    nomap[no] = name;
  }

  while (m--)
  {
    cin >> name;
    if (isdigit(name[0]))
      cout << nomap[stoi(name)] << '\n';
    else
      cout << namemap[name] << '\n';
  }

  return 0;
}
