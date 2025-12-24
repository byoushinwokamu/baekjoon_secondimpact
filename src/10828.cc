// BOJ 10828
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<int, int> pp;

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  string op;
  int n, t;
  stack<int> st;
  cin >> n;
  while (n--)
  {
    cin >> op;
    if (op == "push")
      cin >> t, st.push(t);
    else if (op == "pop")
      if (st.empty())
        cout << "-1\n";
      else
        cout << st.top() << '\n', st.pop();
    else if (op == "size")
      cout << st.size() << '\n';
    else if (op == "empty")
      cout << st.empty() << '\n';
    else if (op == "top")
      if (st.empty())
        cout << "-1\n";
      else
        cout << st.top() << '\n';
  }

  return 0;
}
