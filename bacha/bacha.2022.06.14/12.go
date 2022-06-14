package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const BUFSIZE = 10000000
var rdr *bufio.Reader
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, m := readint2()
    s := make([]int, m)
    c := make([]int, m)
    for i := 0; i < m; i++ {
        s[i], c[i] = readint2()
    }

    for i := 0; i < 1000; i++ {
        digits := maked(i)
        if len(digits) != n {
            continue
        }
        flag := true
        for j := 0; j < m; j++ {
            if digits[n-s[j]] != c[j] {
                flag = false
            }
        }
        if flag {
            fmt.Println(i)
            return
        }
    }
    fmt.Println(-1)
}

func maked(n int) []int {
    res := make([]int, 0)
    if (n == 0) {
        res = append(res, 0)
        return res
    }
    for n > 0 {
        res = append(res, n%10)
        n /= 10
    }
    return res
}
