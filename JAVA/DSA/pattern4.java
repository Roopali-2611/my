

// import java.util.Scanner;

// class pat4{
//     static void inv(int n){
//         for (int i = 1; i <=n; i++) {
//             for (int j=1; j<=n-i+1; j++) {
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//     }
// }
// public class pattern4 {
//     public static void main(String[] args) {
//          Scanner input = new Scanner(System.in);
//          int n = input.nextInt();
//          pat4.inv(n);
//     }
    
    
// }

import java.util.Scanner;

class poor {
   static void pattern5(int n)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < n; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = (N - row index) for each line here.
        for (int j = n; j > i; j--)
        {
            System.out.print("* ");
        }

         // As soon as stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        System.out.println();
    }
}

    public static void main(String[] args) {
        
        // Here, we have taken the value of N as 5.
        // We can also take input from the user.
        Scanner input = new Scanner(System.in);
         int n = input.nextInt();
         poor.pattern5(n);
    }
}

