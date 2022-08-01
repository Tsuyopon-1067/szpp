package main

import (
    "fmt"
)

func main() {
    var a, b, k int
    fmt.Scanf("%d %d %d", &a, &b, &k)
    ans := 0
    for b > a {
        ans++
        a *= k
    }
    fmt.Println(ans)
}
