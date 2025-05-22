func twoSum(nums []int, target int) []int {
    hashmap := make(map[int]int)

    for index, value := range nums {
        toFind := target - value
        if j, ok := hashmap[toFind]; ok {
            return []int {index, j}
        }
        hashmap[value] = index
    }
    return []int {}
}
