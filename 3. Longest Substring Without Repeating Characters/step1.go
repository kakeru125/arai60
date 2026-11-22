func lengthOfLongestSubstring(s string) int {
	lastSeen := make(map[rune]int)
	head, tail, max := 0, 0, 0

	for i, char := range s {
		if prev, exists := lastSeen[char]; exists && prev >= head {
			head = prev + 1
		}
		lastSeen[char] = i

		tail = i
		if len := tail - head + 1; len > max {
			max = len
		}
	}
	return max
}

// タイムアウトになったコード
// func lengthOfLongestSubstring(s string) int {
// 	result := 0
// 	for i := 0; i < len(s); i++ {
// 		curMax := 0
// 		dict := make(map[byte]bool)
// 		for j := i; j < len(s); j++ {
// 			target := s[j]
// 			if dict[target] {
// 				break
// 			}
// 			dict[target] = true
// 			curMax++
// 		}
// 		if curMax > result {
// 			result = curMax
// 		}
// 	}
// 	return result
// }