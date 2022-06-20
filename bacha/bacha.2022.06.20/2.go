package main

import (
    "fmt"
)

func main() {
    var k, a, b int
    fmt.Scanf("%d", &k)
    fmt.Scanf("%d %d", &a, &b)

    ans := "NG"
    for i := a/k; k*i <= b; i++ {
        if a <= k*i {
            ans = "OK"
        }
    }
    fmt.Println(ans)
}
