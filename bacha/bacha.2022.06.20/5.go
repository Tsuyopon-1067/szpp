package main

import (
    "fmt"
    "bufio"
    "os"
    "strings"
    "strconv"
)

const INFL = 9000000000000000000
const BUFSIZE = 10000000
var rdr *bufio.Reader
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func readStringSlice() []string { return strings.Split(readline(), " ") }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

var t [][]int
var ans string = "Nothing"
var n, k int

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, k = readint2()
    t = make([][]int, n)
    for i := 0; i < n; i++ {
        t[i] = readIntSlice()
    }

    for j := 0; j < k; j++ {
        dfs(t, 0, j, t[0][j])
    }
    fmt.Println(ans)
}

func dfs(t [][]int, i, j, res int) { // ary tate, yoko, res
    if i+1 >= n {
        if res == 0 {
            ans = "Found"
        }
        return
    }

    for nj := 0; nj < k; nj++ {
        dfs(t, i+1, nj, res^t[i+1][nj])
    }
}
