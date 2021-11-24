package main

import "fmt"

func main() {
	fmt.Println(reverse2("APPLE"))
}

func reverse2(s string) (result string) {
	for _, char := range s {
		fmt.Println(string(char))
		result = string(char) + result
	}
	return
}
