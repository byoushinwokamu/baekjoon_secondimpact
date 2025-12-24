// BOJ 1152
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
  string s;
  cin >> s;
  int i = 0;
  while (!cin.eof())
  {
    i++;
    cin >> s;
  }
  cout << i;

  return 0;
}
