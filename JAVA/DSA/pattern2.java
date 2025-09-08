
import java.util.Scanner;

class pattern{
    static void pyramid(int n){
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print('*');
            }
            System.out.println();
        }
    }
}    
    public class pattern2 {
        public static void main(String[] args) {
            // System.out.println("enter the value of n");
            Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            pattern.pyramid(n);
            input.close();
        }

}
