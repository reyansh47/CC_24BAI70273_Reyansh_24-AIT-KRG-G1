#include <bits/stdc++.h>
using namespace std;

int main()
{
int n, t;
cin >> n >> t;

int a[n];

for(int i = 0; i < n; i++)
cin >> a[i];

int i = 0, j = 0;
long long sum = 0;
int ans = 0;

while(j < n)
{
sum += a[j];

while(sum > t)
{
sum -= a[i];
i++;
}

if(sum <= t)
ans = max(ans, j - i + 1);

j++;
}

cout << ans;

return 0;
}
