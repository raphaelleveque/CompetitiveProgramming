func containsDuplicate(nums []int) bool {
    set := make(map[int]bool)

    for _, value := range nums {
        if set[value] {
            return true
        }
        set[value] = true
    }
    return false
}
