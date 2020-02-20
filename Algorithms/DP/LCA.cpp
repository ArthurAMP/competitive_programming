#include <bits/stdc++.h>

using namespace std;

const int maxn = 1010;
int seq1[maxn], seq2[maxn];
int dp[maxn][maxn];

int LCS(int a, int b) {

	if(dp[a][b] >= 0) return dp[a][b];

	if(a == 0 || b == 0) return 0;

	if(seq1[a] == seq2[b]) return dp[a][b] = LCS(a-1, b-1) + 1;

	else return dp[a][b] = max(LCS(a, b-1), LCS(a-1, b));
}