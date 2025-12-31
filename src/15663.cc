// BOJ 15663
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int n, m;
vector<int> num;
vector<int> v;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  cin >> n >> m;
  num.resize(n);
  v.resize(m);
  for (int i = 0; i < n; i++)
    cin >> num[i];

  return 0;
}
