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

int a[n];

for(int i = 0; i < n; i++)
cin >> a[i];

int k = 0;

while(k < n && a[k] == 1)
k++;

if(k == n)
{
if(n % 2 == 1)
cout << "First" << endl;
else
cout << "Second" << endl;
}
else
{
if(k % 2 == 0)
cout << "First" << endl;
else
cout << "Second" << endl;
}
}

return 0;
}
