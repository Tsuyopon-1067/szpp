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
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n , k := readint2()
    t := make([][]int, n)
    for i := int(0); i < n; i++ {
        t[i] = readIntSlice()
    }

    p := make([]int, 0)
    for i := 1; i < n; i++ {
        p = append(p, i)
    }

    ans := 0
    for {
        sum, v := 0, 0
        for i := 0; i < n-1; i++ {
            sum += t[v][p[i]]
            v = p[i]
        }
        sum += t[p[n-2]][0]
        if sum == k {
            ans++
        }
        if !nextPermutation(sort.IntSlice(p)) {
            break
        }
    }
    fmt.Println(ans)
}

func nextPermutation(x sort.Interface) bool {
    n := x.Len() - 1
    if n < 1 {
        return false
    }
    j := n - 1
    for ; !x.Less(j, j+1); j-- {
        if j == 0 {
            return false
        }
    }
    l := n
    for !x.Less(j, l) {
        l--
    }
    x.Swap(j, l)
    for k, l := j+1, n; k < l; {
        x.Swap(k, l)
        k++
        l--
    }
    return true
}
