// https://leetcode.com/problems/two-sum/
package main

import "fmt"

func twoSum(nums []int, target int) []int {
	possible := make(map[int]int)
	for index, value := range nums {
		if index2, exists := possible[target-value]; exists {
			return []int{index2, index}
		}
		possible[value] = index
	}
	return []int{0, 0}
}

func main() {
	target := 9
	nums := []int{2, 7, 11, 15}
	s := twoSum(nums, target)
	fmt.Println(s)
}
