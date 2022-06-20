package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scanf("%d", &n)

    ans := "No"
    for i := 1; i <= 9; i++ {
        for j := 1; j <= 9; j++ {
            if i * j == n {
                ans = "Yes"
            }
        }
    }
    fmt.Println(ans)
}
