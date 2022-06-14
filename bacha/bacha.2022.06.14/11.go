package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
    "sort"
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
    b := readIntSlice()
    c := readIntSlice()

    sort.Slice(a, func(i, j int) bool {
        return a[i] < a[j]
    })
    sort.Slice(b, func(i, j int) bool {
        return b[i] < b[j]
    })
    sort.Slice(c, func(i, j int) bool {
        return c[i] < c[j]
    })

    ans := 0
    bi, ci := 0, 0
    for i := 0; i < n; i++ {
        for i+bi < n {
            if a[i] < b[i+bi] {
                break
            }
            bi++
        }
        if i+bi >= n || i+ci >= n {
            break
        }
        for i+ci < n {
            if b[i+bi] < c[i+ci] {
                break
            }
            ci++
        }
        if i+bi >= n || i+ci >= n {
            break
        }
        if a[i] < b[i+bi] && b[i+bi] < c[i+ci] {
            ans++
        }
    }
    fmt.Println(ans)
}
