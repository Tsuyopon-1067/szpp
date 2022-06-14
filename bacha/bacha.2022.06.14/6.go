package main

import (
    "fmt"
)

const MOD = 998244353

func main() {
    var n int
    fmt.Scanf("%d", &n)
    dp := make([][]int, n+1)
    for i := int(0); i < n+1; i++ {
        dp[i] = make([]int, 9)
    }
    for i := 0; i < 9; i++ {
        dp[0][i] = 1
    }

    for i := 1; i < n; i++ {
        for j := 0; j < 9; j++ {
            if 0 <= j-1 {
                dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % MOD
            }
            if j+1 < 9 {
                dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % MOD
            }
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD
        }
    }

    ans := 0
    for i := 0; i < 9; i++ {
        ans = (ans + dp[n-1][i]) % MOD
    }
    fmt.Println(ans)
}
