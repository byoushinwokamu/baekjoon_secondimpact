// BOJ 2164
#include <algorithm>
#include <iostream>
#include <string>
#include <deque>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  deque<int> dq;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    dq.push_back(i);

  while (dq.size() > 1)
  {
    dq.pop_front();
    dq.push_back(dq.front());
    dq.pop_front();
  }
  cout << dq.front();

  return 0;
}
