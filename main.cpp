#include <iostream>
#include <fstream>

using namespace std;
 ifstream in("data.in");
 ofstream out("data.out");
int n, i, j, a[10][10], x, y, z, xmax, ymax;
int main()
{in>>n;
for(i=0;i<n;i++)
{
    in>>x>>y>>z;
    a[x][y]=z;
    if(xmax<x)xmax=x;
    if(ymax<y)ymax=y;
}

for(i=0;i<=xmax;i++){
    for(j=0;j<=ymax;j++)
    out<<a[i][j]<<" ";
    out<<endl;}

    return 0;
}
