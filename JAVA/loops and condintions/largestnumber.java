import java.util.Scanner;
public class largestnumber {
    public static void main(String[] args){
        System.out.println("Enter three numbers to find which one is largest" );
        Scanner input = new Scanner(System.in);
        System.out.print("a=");
        int a = input.nextInt();
        System.out.print("b=");
        int b = input.nextInt();
        System.out.print("c=");
        int c = input.nextInt();
        int max = a;
        if(b>max){
            max = b;
        }
        if(c>max){
            max = c;
        }
        System.out.println("the largest number is" + max);
        
    }
    
}
