public static List<Integer> rotateLeft(int d, List<Integer> arr) {
    d = d % arr.size();
    Collections.reverse(arr);
    Collections.reverse(arr.subList(0, arr.size() - d));
    Collections.reverse(arr.subList(arr.size() - d, arr.size()));
    return arr;
}