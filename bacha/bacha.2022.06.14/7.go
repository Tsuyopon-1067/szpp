package main

import (
    "fmt"
    "bufio"
    "os"
    "strconv"
)

const BUFSIZE = 10000000
const INFL = 200000000000000000
var rdr *bufio.Reader
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n := readint()
    s := make([]string, n)
    for i := 0; i < n; i++ {
        s[i] = readline()
    }

    c := make([][]int, n)
    for i := int(0); i < n; i++ {
        c[i] = make([]int, 26)
    }
    for i := 0; i < n; i++ {
        for _, v := range s[i] {
            c[i][v-'a']++
        }
    }

    cmin := make([]int, 26)
    for i := 0; i < 26; i++ {
        cmin[i] = INFL
    }

    for i := 0; i < 26; i++ {
        for j := 0; j < n; j++ {
            chmin(&cmin[i], c[j][i])
        }
    }

    for i := 0; i < 26; i++ {
        for j := 0; j < cmin[i]; j++ {
            fmt.Print(string('a'+i))
        }
    }
    fmt.Println()
}
