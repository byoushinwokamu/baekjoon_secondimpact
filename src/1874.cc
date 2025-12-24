// BOJ 1874
#include <algorithm>
#include <iostream>
#include <stack>
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
  stack<int> st;
  string res;
  int n, t, i = 1;
  cin >> n;
  for (int pr = 0; pr < n;)
  {
    cin >> t;
    if (st.empty())
    {
      while (i <= t)
        st.push(i++), res.append("+\n");
      st.pop(), res.append("-\n"), pr++;
    }
    else if (st.top() < t) // 뽑아보거나 푸시해야함
    {
      while (i <= t) // 나올때까지 푸시
        st.push(i++), res.append("+\n");
      st.pop(), res.append("-\n"), pr++;

      if (i > t) // 지나감
      {
        cout << res;
        cout << st.top() << "NOOOOOO";
        return 0;
      }
    }
    else if (st.top() > t) // 가로막고 있음
    {
      // cout << res;
      cout << "NO";
      return 0;
    }
    else // same
      st.pop(), res.append("-\n"), pr++;
  }
  cout << res;

  return 0;
}
