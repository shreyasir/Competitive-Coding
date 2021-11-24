package main

import "fmt"

func main() {
	fmt.Println(reverse1("APPLES"))
}

func reverse1(s string) string {
	rns := []rune(s)
	for i, j := 0, len(rns)-1; i < j; i, j = i+1, j-1 {
		fmt.Println(i, j, string(rns[i]), string(rns[j]))
		rns[i], rns[j] = rns[j], rns[i]
	}
	return string(rns)
}
