public class linearsearch {

    public static void main(String[] args) {
        int[] nums = {23, 45, 34, 12, 3, 56};
        int target =5;
        boolean ans = linear(nums, target);
        System.out.println(ans); // Output will be 3
    }

    static boolean  linear(int[] arr, int target) {
        if (arr.length == 0) {
            // return -1;
        }
        for (int element : arr ) {
            if (element == target){
                return true;
               
            }
            
        }
        return false;
    }
}


