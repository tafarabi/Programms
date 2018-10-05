
// CPP program to find number of possible moves of knight
#include <bits/stdc++.h>
#define n 8
#define m 8
using namespace std;

// To calculate possible moves
int findPossibleMoves(int mat[n][m], int p, int q)
{
    // All possible moves of a knight
    int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    int count = 0;

    // Check if each possible move is valid or not
    for (int i = 0; i < 8; i++) {

        // Position of knight after move
        int x = p + X[i];
        int y = q + Y[i];

        // count valid moves
        if (x > 0 && y > 0 && x < n && y < m
            && mat[x][y] == 0)
            count++;

    }

    // Return number of possible moves
    return count;
}

// Driver program to check findPossibleMoves()
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

    for(int i=0;i<t;i++){
    cin>>p>>q;
    printf("Case %d: %d\n", i+1, findPossibleMoves(mat, p, q));
    }


    return 0;
}
