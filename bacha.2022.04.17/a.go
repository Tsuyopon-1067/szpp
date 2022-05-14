package main

import ("fmt")

func main() {
    var a, b int64;
    fmt.Scanf("%d %d", &a, &b);
    if (0 < a && b == 0) {
        fmt.Println("Gold");
    } else if (0 == a && 0 < b) {
        fmt.Println("Silver");
    } else if (0 < a && 0 < b) {
        fmt.Println("Alloy");
    }
}
