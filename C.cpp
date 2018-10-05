#include <bits/stdc++.h>
long long int printDivisors(long long int n)
{
    long long int countno=0;
    for (int i=1;i<=n;i++)
        if (n%i==0)
        {
            if(i%2!=0)
            {
                countno++;
            }

        }
             return countno;
}

int main()
{

    long long int t,l,r;
    scanf("%lld",&t);


    if(t>0&&t<=100000)
for(long long int p=0;p<t;p++)
{
    long long int cf=0;
    scanf("%lld %lld",&l,&r);
    for(long long int j=l;j<=r;j++)
    {
       long long int k=printDivisors(j);
        if(k%2!=0)
           cf++;

    }
printf("Case %lld:%lld \n",p+1,cf);

}
 return 0;

}
