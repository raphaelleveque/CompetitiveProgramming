func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}

func replaceElements(arr []int) []int {
    maxValue := -1
    for i := len(arr) - 1; i >= 0; i-- {
        tmp := arr[i]
        arr[i] = maxValue
        maxValue = max(tmp, maxValue)
    }
    return arr
}
