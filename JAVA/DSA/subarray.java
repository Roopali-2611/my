public class subarray {
  
    public static void arraypair(int number[]){
        for (int i = 0; i < number.length; i++) {
            for (int j =i; j <number.length; j++) {
                int start=i;
                int end =j;
                System.out.print("(");
                for (int k =start; k <=end; k++) {
                    System.out.print(number[k]+",");
                    
                }
                System.out.print(")");
                System.out.println();
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        int number[]={2,4,6,8,10};
        arraypair(number);
    }
    

}
