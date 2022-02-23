package main
import (
    "fmt"
    "golang.org/x/exp/constraints"
)
// + の型制約
type Addable interface {
	~int | ~int8 | ~int16 | ~int32 | ~int64 |
		~uint | ~uint8 | ~uint16 | ~uint32 | ~uint64 |
		~float32 | ~float64
}

func zero[T any]() T {
    var z T
    return z
}
func sum[T Addable](v []T) T{
    sumValue := zero[T]()
    for _, elem := range v {
        sumValue += elem
    }
    return sumValue
}
func max[T constraints.Ordered](a []T) T {
    var maxValue T = a[0]
    for _, elem := range a[1:] {
        if elem > maxValue {
            maxValue = elem
        }
    }
    return maxValue
}
func Filter[T any](a []T, f func(*T) bool) []T {
    b := make([]T, 0)
    for _, elem := range a {
        if f(&elem) {
            b = append(b, elem)
        }
    }
    return b
}

func main() {
    v := []int{7, 0, 0, 1, 0, 0, 9, 8}
    v1 := []int{7, 0, 0, 1, 0, 0, 9, 8}
	v2 := []float64{7.0, 0.0, 0.0, 1.0, 0.0, 0.0, 6.0, 0.0}
	fmt.Println(sum(v1))
	fmt.Println(sum(v2))
    fmt.Println("Max is", max(v))
}
