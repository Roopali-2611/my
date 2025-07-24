import java.util.Scanner;

public class casecheck {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            char ch = in.next().trim().charAt(2);
            if(ch>='a' && ch<='z'){
                System.out.println("lower case");
            }
            else{
                System.out.println("upper case ");
            }
            System.out.println(ch);
        }
    }

