func firstUniqChar(s string) int {
	countByRune := make(map[rune]int)

	for _, char := range []rune(s) {
		countByRune[char]++
	}

	for i, char := range []rune(s) {
		if countByRune[char] == 1 {
			return i
		}
	}
	return -1
}