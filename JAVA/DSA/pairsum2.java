// better approach

public class pairsum2 {
    public static void arraypair(int number[]){
        
        int cm=0;
        int mm=Integer.MIN_VALUE;
        int prefix[]=new int[number.length];
        prefix[0]=number[0];
        for (int idx = 1; idx < prefix.length; idx++) {
            prefix[idx]=prefix[idx-1]+number[idx];
        }
        for (int i = 0; i < number.length; i++) {
            for (int j =i; j <number.length; j++) {
                int start=i;
                int end =j;
                cm=0;
                cm= start == 0 ? prefix[end] : prefix[end]-prefix[start-1];
                    if(cm>mm){
                        mm=cm;
                    }
                }
            }
            System.out.println("maximum sum is: "+mm);
    }
    public static void main(String[] args) {
        int number[]={2,4,6,8,10};
        arraypair(number);
    }
    

    
}
