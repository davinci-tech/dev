#include <bits/stdc++.h>

using namespace std;
stack < pair < char, int > > a;
int n,k,i,nr;
char s[200004],b[200004];
int main()
{
    scanf ("%d %d", &n, &k);
    assert ((1<=n) && (n<=200000));
    assert ((1<=k) && (k<=200000));
    scanf ("%s", &s);
    for (i=0;i<=(n-1);i++)
        assert (('a'<=s[i]) && (s[i]<='z'));
    for (i=0;i<n;i++)
    {
        if (a.empty())
            a.push({s[i],1});
        else if (s[i]==a.top().first)
        {
            a.top().second++;
            if (a.top().second==k)
                a.pop();
        }
        else
            a.push({s[i],1});
    }
    nr=0;
    while (!a.empty())
    {
        for (i=1;i<=a.top().second;i++)
            b[++nr]=a.top().first;
        a.pop();
    }
    reverse(b+1,b+nr+1);
    for (i=1;i<=nr;i++)
        printf ("%c", b[i]);
    printf ("\n");
    return 0;

}
