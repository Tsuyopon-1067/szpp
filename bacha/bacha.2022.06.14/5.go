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
func chmin(a *int, b int) (res bool) { if res = *a > b; res { *a = b }; return }
func chmax(a *int, b int) (res bool) { if res = *a < b; res { *a = b }; return }
func abs(x int) int { if x >= 0 { return x } else { return -x } }
func lower_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if x < a[0] { return -1 }; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] < x { l = m+1 } else { r = m-1 } }; return l }
func upper_bound(a []int, x int) int { n := len(a); l, r := 0, n-1; if x < a[0] { return -1 }; if a[n-1] < x { return n }; for l <= r { m := l + (r-l)/2; if a[m] <= x { l = m+1 } else { r = m-1 } }; return l }
func readline() string { buf := make([]byte, 0, 16); for { l, p, e := rdr.ReadLine(); if e != nil { fmt.Println(e.Error()); panic(e) }; buf = append(buf, l...); if !p { break } }; return string(buf) }
func readIntSlice() []int { slice := make([]int, 0); lines := strings.Split(readline(), " "); for _, v := range lines { slice = append(slice, s2i(v)) }; return slice; }
func s2i(s string) int { v, ok := strconv.Atoi(s); if ok != nil { panic("Faild : " + s + " can't convert to int") }; return v }
func readint() int { return s2i(readline()) }
func readint2() (int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]) }
func readint3() (int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]) }
func readint4() (int, int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]), s2i(lines[3]) }
func readint5() (int, int, int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]), s2i(lines[3]), s2i(lines[4]) }
func readint6() (int, int, int, int, int, int) { lines := strings.Split(readline(), " "); return s2i(lines[0]), s2i(lines[1]), s2i(lines[2]), s2i(lines[3]), s2i(lines[4]), s2i(lines[5]) }

func main() {
    rdr = bufio.NewReaderSize(os.Stdin, BUFSIZE)
    h, w := readint2()
    c := make([]string, h)
    for i := 0; i < h; i++ {
        c[i] = readline()
    }

    dp := make([][]int, h)
    for i := int(0); i < h; i++ {
        dp[i] = make([]int, w)
        for j := 0; j < w; j++ {
            dp[i][j] = 0
        }
    }

    dp[0][0] = 1
    for i := 0; i < h; i++ {
        for j := 0; j < w; j++ {
            if dp[i][j] == 0 || c[i][j] == '#' {
                continue
            }
            if i+1 < h && c[i+1][j] == '.' {
                chmax(&dp[i+1][j], dp[i][j]+1)
            }
            if j+1 < w && c[i][j+1] == '.' {
                chmax(&dp[i][j+1], dp[i][j]+1)
            }
        }
    }

    ans := 0
    for i := 0; i < h; i++ {
        for j := 0; j < w; j++ {
            chmax(&ans, dp[i][j])
        }
    }
    fmt.Println(ans)
}
