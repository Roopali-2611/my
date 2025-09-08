//finding the missing number from 1-n

class missing{
    int n=9;
    int[] arr;
    void miss(){
        int sum=(n*(n+1))/2;
        int actualSum = 0;
        for (int num : arr) {
            actualSum += num;
        }
        int number=sum-actualSum;
        System.out.println(number);
    }
    
}
public class lc268 {
    public static void main(String[] args) {
        missing a = new missing();
        a.arr = new int[]{1,2,3,4,5,7,8,9};
        a.miss();
        
    }
    
}

