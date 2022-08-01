package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scanf("%d", &n)
    a := make([][]int, n)
    for i := 0; i < n; i++ {
        a[i] = make([]int, i+1)
    }

    for i := 0; i < n; i++ {
        for j := 0; j < i+1; j++ {
            if j == 0 || i == j {
                a[i][j] = 1
            } else {
                a[i][j] = a[i-1][j] + a[i-1][j-1]
            }
        }
    }

    for i := 0; i < n; i++ {
        for _, v := range a[i] {
            fmt.Printf("%d ", v)
        }
        fmt.Println()
    }
}
