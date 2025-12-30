// BOJ 5430
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
  while (t--)
  {
    string func, arr;
    int n;
    cin >> func >> n >> arr;
    vector<int> v;
    int acc = 0;
    for (auto c : arr)
    {
      if (isdigit(c))
        acc *= 10, acc += c - '0';
      else if (c == ',' || c == ']')
        v.push_back(acc), acc = 0;
    }

    int dir = 1;
    int head = 0, tail = n - 1, temp;
    bool err = false;

    for (auto f : func)
    {
      if (f == 'R')
        dir *= -1, temp = head, head = tail, tail = temp;
      else if (f == 'D' && head - dir == tail)
        err = true;
      else
        head += dir;
    }

    if (err)
    {
      cout << "error\n";
      continue;
    }
    if (head - dir == tail)
    {
      cout << "[]\n";
      continue;
    }
    cout << '[' << v[head];
    for (int i = head + dir; (dir > 0) ? (i <= tail) : (i >= tail); i += dir)
      cout << ',' << v[i];
    cout << "]\n";
  }

  return 0;
}
