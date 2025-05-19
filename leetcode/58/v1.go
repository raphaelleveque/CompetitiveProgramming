func lengthOfLastWord(s string) int {
    listas := strings.Split(s, " ")
    res := ""
    for _, palavra := range listas {
        if palavra != "" {
            res = palavra
        }
    }
    return len(res)
}
