func firstUniqChar(s string) int {
	letters := []rune(s)
	countByLetter := make(map[rune]int)

	for _, letter := range letters {
		countByLetter[letter]++
	}

	for i, letter := range letters {
		if countByLetter[letter] == 1 {
			return i
		}
	}
	return -1
}