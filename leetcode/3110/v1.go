func scoreOfString(s string) int {
    sum := 0
    for i := 1; i < len(s); i++ {
        sum += abs(int(s[i]) - int(s[i - 1]))
    }
    return sum
}

func abs(n int) int {
    if n < 0 {
        return -n
    }
    return n
}
