/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    pp a[n];

    k = 0;
    for(i = 0; i < n; i++)
    {
        sf(a[i].first);
        a[i].second = i;

        if(a[i].first >= 0)
            a[i].first = -a[i].first - 1;
    }

    sort(a, a + n, greater<pp>());

    //all are negative now
    if(n % 2)
    {
        //make one positive
        a[0].first = abs(a[0].first) - 1;
    }

    for(i = 0; i < n; i++)
        swap(a[i].first, a[i].second);

    sort(a, a + n);

    for(i = 0; i < n; i++)
        pf(a[i].second), pfs(" ");

    return 0;
}
