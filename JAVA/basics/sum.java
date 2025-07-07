import java.util.Scanner;

public class sum{
    public static void main(String[] args){
        try (Scanner input = new Scanner(System.in)){
            int a = input.nextInt();
            int b = input.nextInt();
            int sum = a+b;
            System.out.println("the sum of two numbers is"+ sum);
        }
        
    
    }
}