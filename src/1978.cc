// BOJ 1978
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;
vector<bool> isnop(1001);

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  int n, a, c = 0;
  isnop[1] = true;
  for (int i = 2; i <= 1000; i++)
    for (int j = 2; i * j <= 1000; j++)
      isnop[i * j] = true;

  cin >> n;
  while (n--)
    cin >> a, isnop[a] ? c : c++;
  cout << c;
  return 0;
}
