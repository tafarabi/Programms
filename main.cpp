#include<bits/stdc++.h>
using namespace std;
int main()
{
    
int A,B,K,M,I=0,status=99999999;
vector<int> k ;
vector<int> m ;
cin>>A>>B;
int gcd = __gcd(A,B);
int ngcd = -gcd;
for(int i=ngcd;i<=gcd;i++)
{
    for(int j=ngcd; j<=gcd;j++)
    {
        if((A*i+B*j)==gcd)
        {
            int status2 = abs(i)+abs(j);
            if(status2<status)
            {
                status=status2;
                K = i;
                M = j;
            }
            else if(status2==status)
            {
                k.push_back(i);
                m.push_back(j);
            }
        }
    }
}
        if(!k.empty())
        {
            for(int p=0;p<k.size();++p)
            {
                if(k[p]<m[p])
                {
                    K = k[p];
                    M = m[p];
                    
                }
            }
            
            cout<<K<<" "<<M<<" "<<gcd<<endl;
        }
        else
        cout<<K<<" "<<M<<" "<<gcd<<endl;


}
