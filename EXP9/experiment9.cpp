#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >> n;

vector<pair<int,int>> edges(n-1);
vector<int> degree(n+1, 0);

for(int i = 0; i < n-1; i++)
{
cin >> edges[i].first >> edges[i].second;
degree[edges[i].first]++;
degree[edges[i].second]++;
}

vector<int> result(n-1, -1);

int junctionNode = -1;

for(int i = 1; i <= n; i++)
{
if(degree[i] >= 3)
{
junctionNode = i;
break;
}
}

if(junctionNode == -1)
{
for(int i = 0; i < n-1; i++)
cout << i << endl;
}
else
{
int labeledCount = 0;

for(int i = 0; i < n-1; i++)
{
if((edges[i].first == junctionNode || edges[i].second == junctionNode) && labeledCount < 3)
{
result[i] = labeledCount;
labeledCount++;
}
}

int remaining = labeledCount;

for(int i = 0; i < n-1; i++)
{
if(result[i] == -1)
{
result[i] = remaining;
remaining++;
}
}

for(int i = 0; i < n-1; i++)
cout << result[i] << endl;
}

return 0;
}
