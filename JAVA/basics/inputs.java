
import java.util.Scanner;

public class inputs {
    public static void main(String[] args) {
       try (Scanner input = new Scanner(System.in)){
        System.out.println("please enter your roll number:");
        int rollno = input.nextInt();
        System.out.println("your roll nukmber is :"+rollno);
        }
    }
    
}
