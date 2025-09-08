import java.util.Arrays;

class RotateInPlace {
    int[] array;
    int k;
    
    void rotate() {
        int n = array.length;
        k = k % n; // to handle k > n
        
        // Step 1
        reverse(0, n - 1);
        
        // Step 2
        reverse(0, k - 1);
        
        // Step 3
        reverse(k, n - 1);
        
        System.out.println(Arrays.toString(array));
    }
    
    void reverse(int start, int end) {
        while (start < end) {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;
            start++;
            end--;
        }
    }
}

public class better189 {

    public static void main(String[] args) {
        RotateInPlace a1 = new RotateInPlace();
        a1.k = 3;
        a1.array = new int[]{1, 2, 3, 4, 5, 6, 7};
        a1.rotate();
    }
}

    
