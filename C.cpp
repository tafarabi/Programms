#include <bits/stdc++.h>
long long int printDivisors(long long int n)
{
    long long int countno=0;
    for (int i=1; i<=n/2; i++)
        if (n%i==0)
        {
            if(i%2!=0)
            {
                countno++;
            }

        }
    return (countno);
}
int printNos(unsigned int n,int n1)
{

    long long int k=0;
    if(n >= n1)
    {
        printNos(n-1,n1);
        // printf("%d ", n);
        k=printDivisors(n);
        printf("%lld  ",k);

    }
    return k;
}
int main()
{

    long long int t,l,r;
    scanf("%lld",&t);


    if(t>0&&t<=100000)
        for(long long int p=0; p<t; p++)
        {
            long long int cf=0;
            scanf("%lld %lld",&l,&r);

            cf = printNos(r,l);

            printf("Case %lld: %lld \n",p+1,cf);

        }
    return 0;

}
