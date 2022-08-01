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
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    a := readIntSlice()
    mp := make(map[int]int)
    for i := 0; i < n; i++ {
        mp[a[i]]++
    }

    ans := 0
    for i := -200; i <= 200; i++ {
        for j := -200; j <= 200; j++ {
            ans += mp[i]*mp[j]*(i-j)*(i-j)
        }
    }
    fmt.Println(ans/2)
}
