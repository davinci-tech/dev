#include <fstream>



using namespace std;
ifstream f("cifreord1.in");
ofstream g("cifreord1.out");
int main()
{​​
int x, v[10]={​​0}​​, l=0;

while(f>>x)
if(x==0)
v[0]++;
else
while(x)
{​​
v[x%10]++;
x/=10;
}​​
for(int i=9;i>-1;--i)

while(v[i]>0)
{​​
g<<i<<' ';
v[i]--;
l++;
if(l==20)
{​​
l=0;
g<<'\n';
}​​
}​​
}​​