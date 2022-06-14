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
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    n, m := readint2()
    b := make([][]int, n)
    for i := int(0); i < n; i++ {
        b[i] = readIntSlice()
    }

    x := (b[0][0] + 6) % 7 + 1
    y := (b[0][0] - x) / 7 + 1

    ans := "Yes"
    for i := 0; i < n; i++ {
        for j := 0; j < m; j++ {
            tx := (b[i][j] - 1) % 7 + 1
            ty := (b[i][j] - tx) / 7 + 1
            if tx != x + j || ty != y + i {
                ans = "No"
            }
        }
    }
    fmt.Println(ans)
}
