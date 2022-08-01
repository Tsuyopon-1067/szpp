package main

import (
    "fmt"
)

func main() {
    var a, b int
    fmt.Scanf("%d %d", &a, &b)

    mon := [] int{-1, 31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}

    ans := 0
    for i := 1; i <= a; i++ {
        for j := 1; j <= mon[i]; j++ {
            if j == i {
                ans++
            }
            if i == a && j == b {
                break
            }
        }
    }
    fmt.Println(ans)
}
