// BOJ 1991
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#define fi first
#define se second

using namespace std;

typedef long long ll;
typedef pair<char, char> pp;

int n;
map<char, pp> adj;

void pre(char now)
{
  cout << now;
  if (adj[now].fi != '.')
    pre(adj[now].fi);
  if (adj[now].se != '.')
    pre(adj[now].se);
}

void mid(char now)
{
  if (adj[now].fi != '.')
    mid(adj[now].fi);
  cout << now;
  if (adj[now].se != '.')
    mid(adj[now].se);
}

void post(char now)
{
  if (adj[now].fi != '.')
    post(adj[now].fi);
  if (adj[now].se != '.')
    post(adj[now].se);
  cout << now;
}

int main()
{
  cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
  char a, b, c;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c;
    adj[a] = {b, c};
  }
  pre('A');
  cout << '\n';
  mid('A');
  cout << '\n';
  post('A');

  return 0;
}
