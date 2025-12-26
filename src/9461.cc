// BOJ 9461
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
  int t;
  cin >> t;
  vector<ll> pdb(101);
  pdb[1] = 1, pdb[2] = 1, pdb[3] = 1, pdb[4] = 2, pdb[5] = 2;
  for (int i = 6; i <= 100; i++)
    pdb[i] = pdb[i - 1] + pdb[i - 5];
  while (t--)
  {
    int n;
    cin >> n;
    cout << pdb[n] << '\n';
  }

  return 0;
}
