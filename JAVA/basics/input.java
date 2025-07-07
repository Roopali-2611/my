
import java.util.Scanner;

public class input {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("enter the number");
            System.out.println(input.nextInt());
        }
        
    }
    
}
