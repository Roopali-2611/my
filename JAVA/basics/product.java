import java.util.Scanner;
public class product {
    public static void main(String[] args){
        try (Scanner input = new Scanner(System.in)){
            System.out.println("enter first number");
            int a = input.nextInt();
            System.out.println("enter second number");
            int b = input.nextInt();
            int product = a*b;
            System.out.println("the product of two numbers is:"+ product);
        }
    }
    
}
