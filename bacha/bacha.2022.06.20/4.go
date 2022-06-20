package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
    "strconv"
	"strings"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func lower_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] < x { l = m+1 } else { r = m-1 } }; return l }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, q := readint2()
    a := readIntSlice()

    sort.Slice(a, func(i, j int) bool {
        return a[i] < a[j]
    })
    for i := 0; i < q; i++ {
        x := readint()
        ans := n - lower_bound(a, x)
        fmt.Println(ans)
    }
}
