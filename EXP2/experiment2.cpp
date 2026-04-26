#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >> n;

int a[n];
int cnt = 0;

for(int i = 0; i < n; i++)
{
cin >> a[i];
if(a[i] == 1)
cnt++;
}

int ans = -1e9;

for(int i = 0; i < n; i++)
{
int z = 0;
int o = 0;

for(int j = i; j < n; j++)
{
if(a[j] == 0)
z++;
else
o++;

ans = max(ans, cnt - o + z);
}
}

cout << ans;

return 0;
}
