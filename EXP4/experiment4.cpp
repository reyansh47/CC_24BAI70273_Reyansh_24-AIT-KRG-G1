#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;

while(t--)
{
int n;
cin >> n;

if(n == 1)
{
cout << 1 << endl;
}
else if(n == 2)
{
cout << -1 << endl;
}
else
{
vector<int> val;

for(int i = 1; i <= n*n; i += 2)
val.push_back(i);

for(int i = 2; i <= n*n; i += 2)
val.push_back(i);

for(int i = 0; i < n*n; i++)
{
cout << val[i] << " ";
if((i+1) % n == 0)
cout << endl;
}
}
}

return 0;
}
