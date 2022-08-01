package main

import (
    "fmt"
)

func main() {
    var a, b string
    fmt.Scanf("%s", &a)
    fmt.Scanf("%s", &b)

    ans := "EQUAL"
    if len(a) > len(b) {
        ans = "GREATER"
    } else if len(a) < len(b) {
        ans = "LESS"
    } else {
        for i := 0; i < len(a); i++ {
            if a[i] < b[i] {
                ans = "LESS"
                break
            } else if a[i] > b[i] {
                ans = "GREATER"
                break
            }
        }
    }
    fmt.Println(ans)
}
