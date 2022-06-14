package main

import (
	"fmt"
	"sort"
)

func main() {
    var l, r int
    fmt.Scanf("%d %d", &l, &r)

    k := make([]int, 0)
    if (r-l) >= 2019 {
        for i := 0; i < 2019; i++ {
            k = append(k, i)
        }
    } else {
        for i := l; i <= r; i++ {
            ii := i % 2019
            k = append(k, ii)
        }
        sort.Slice(k, func(i, j int) bool {
            return k[i] < k[j]
        })
    }

    n := len(k)
    ans := 2020
    for i := 0; i < n; i++ {
        for j := i+1; j < n; j++ {
            t := (k[i]*k[j])%2019
            if ans > t {
                ans = t
            }
        }
    }
    fmt.Println(ans)
}
