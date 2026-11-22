func lengthOfLongestSubstring(s string) int {
	lastIndexByRune := make(map[rune]int)
	left, longestLength := 0, 0

	for right, char := range []rune(s) {
		if previousIndex, exists := lastIndexByRune[char]; exists && previousIndex >= left {
			left = previousIndex + 1
		}
		lastIndexByRune[char] = right

		if windowLength := right - left + 1; windowLength > longestLength {
			longestLength = windowLength
		}
	}
	return longestLength
}	