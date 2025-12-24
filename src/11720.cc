// BOJ 11720
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
  string str;
  cin >> n >> str;
  int s = 0;
  for (auto c : str)
    s += c - '0';
  cout << s;

  return 0;
}
