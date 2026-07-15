class Solution {
    public int findPosition(int[] arr, int target, int i) {
        for (; i < arr.length; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
    public int[] twoSum(int[] numbers, int target) {
        int save = 0;
        int[] res = new int[2];
        for(int i =0; i < numbers.length; i++)
        {
            save = target - numbers[i];
            int pos = findPosition(numbers, save, i + 1);
            if (pos != -1){
                res[0] = i + 1;
                res[1] = pos + 1;
            }
        }
        return res;
    }
}
