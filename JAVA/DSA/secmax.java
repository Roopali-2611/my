public class secmax {
    public static void main(String[] args) {
        int [] arr={1,2,3,4,5};
        int max = arr[0];
        int ans=maximum(arr);
        System.out.println(ans);

    }
    static int maximum(int[] a){
        int max = a[0];
        int secmax = max;
         for (int i = 0; i < a.length;i++){
            if(max<a[i]){
                secmax=max;
                max=a[i];
                
            }
            else if (a[i] > secmax && a[i] != max) {
                secmax = a[i];
            }
         }
         return secmax;

    }
    
}
