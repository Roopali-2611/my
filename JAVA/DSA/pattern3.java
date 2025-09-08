

import java.util.Scanner;

class pat3{
    static void pyr(int n){
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
public class pattern3 {
    public static void main(String[] args) {
         Scanner input = new Scanner(System.in);
         int n = input.nextInt();
         System.out.println("--------------");
         pat3.pyr(n);
    }
    
}
