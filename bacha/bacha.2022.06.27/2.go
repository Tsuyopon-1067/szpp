package main

import (
    "fmt"
)

func main() {
    var n int
    fmt.Scanf("%d", &n)
    ans := 0
    for n > 1 {
        ans++
        n /= 2
    }
    fmt.Println(ans)
}
