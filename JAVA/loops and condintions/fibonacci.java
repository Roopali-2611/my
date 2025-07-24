
import java.util.Scanner;

public class fibonacci {
    public static void main(String[] args) {
        System.out.println("enter the number");
    Scanner in = new Scanner(System.in);
    // int n = input.nextInt();
    int n = in.nextInt();
    int a = 0;
    int b = 1;
    int d = 0;
    System.out.println(b);
    System.out.println("fibonacci series is");
    while ( d<n) {
       System.out.println(a);
       int c = a+b;
       a=b;
       b=c;
       d++;
        
    }

    }
}
