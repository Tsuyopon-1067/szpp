package main

import (
    "fmt"
)

func main() {
    var s string
    fmt.Scanf("%s", &s)

    ans := 0
    k := 0
    for _, c := range s {
        if c == 'R' {
            k++
        } else {
            k = 0
        }
        if ans < k {
            ans = k
        }
    }
    fmt.Println(ans)
}
