public class reversearray {
    public static void main(String[] args) {
        int [] num={1,2,3,4,5};
        int[] b = new int[num.length];
        int [] ans =  rev(num,b);
        for (int i = 0; i < ans.length; i++) {
            System.out.print(ans[i] + " ");
        }
        

        
    }
        static int[] rev(int[] a,int [] b){
            int j = 0;
         for (int i = a.length - 1; i >= 0; i--) {
           b[j] = a[i];
           j++;
        }
        return b;

        }
            
        }
      

    

