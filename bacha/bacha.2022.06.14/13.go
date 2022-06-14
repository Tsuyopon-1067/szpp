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
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    a := readIntSlice()

    sort.Slice(a, func(i, j int) bool {
        return a[i] > a[j]
    })

    v := make([]int, 0)
    for i := 1; i < n; i++ {
        if a[i-1] == a[i] {
            v = append(v, a[i])
            i++
        }
    }

    sort.Slice(v, func(i, j int) bool {
        return v[i] > v[j]
    })
    if len(v) < 2 {
        fmt.Println(0)
    } else {
        fmt.Println(v[0] * v[1])
    }
}
