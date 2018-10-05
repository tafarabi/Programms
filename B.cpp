
#include <bits/stdc++.h>
#define n 8
#define m 8
using namespace std;

int findPossibleMoves(int mat[n][m], int p, int q)
{

    int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    int count = 0;

    for (int i = 0; i < 8; i++) {


        int x = p + X[i];
        int y = q + Y[i];

        if ((((p-x)*(p-x))+((q-y)*(q-y)))==5 && x > 0 && y > 0 && x < n && y < m
            && mat[x][y] == 0)
            count++;


    }

    return count;
}

int main()
{
    int mat[n][m] = { { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 },
                      { 0, 0, 0, 0, 0, 0, 0, 0 }
                       };

    int p, q,t;
    cin>>t;
if(t>=1 && t<=64)
{
    for(int i=0;i<t;i++){
    cin>>p>>q;
    if(p>=1&&p<=8&&q>=1&&q<=8)
    printf("Case %d: %d\n", i+1, findPossibleMoves(mat, p, q));
    }
}



    return 0;
}
