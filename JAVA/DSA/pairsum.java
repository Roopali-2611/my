// complexity O(n^3)
public class pairsum {
     public static void arraypair(int number[]){
        int cm=0;
        int mm=Integer.MIN_VALUE;
        for (int i = 0; i < number.length; i++) {
            for (int j =i; j <number.length; j++) {
                int start=i;
                int end =j;
                cm=0;
                for (int k =start; k <=end; k++) {
                    cm+=number[k];
                }
                    if(cm>mm){
                        mm=cm;
                    }
            }
        }
        System.out.println("maximum sum is"+mm);
    }
    public static void main(String[] args) {
        int number[]={2,4,6,8,10};
        arraypair(number);
    }
    

}
