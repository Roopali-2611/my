public class minimum {
    public static void main(String[] args) {
        int [] arr = {5, -2, 7, 0, -9, 3};
        int min = arr[0];
        int ans=minimum(arr);
        System.out.println(ans);

    }
    static int minimum(int[] a){
        int min = a[0];
         
         for (int i = 0; i < a.length; i++) {
            if(min>a[i]){
                min=a[i];
            }
             
         }
         return min;

    }
}


