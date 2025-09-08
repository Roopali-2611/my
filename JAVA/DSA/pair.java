public class pair {
    public static void arraypair(int number[]){
        for (int i = 0; i < number.length; i++) {
            for (int j =i+1; j <number.length; j++) {
                int current=number[i];
                System.out.println("("+current+","+number[j]+")");
            }
            
        }
    }
    public static void main(String[] args) {
        int number[]={2,4,6,8,10};
        arraypair(number);
    }
    
}
