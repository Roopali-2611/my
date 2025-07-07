import java.util.Scanner;
public class inputcond {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        if(x<2500){
            x+=2000;
        }
        else if (x==2500){
            x+=10;
        }
        else{
            x+=100;
        }
        System.out.println(x);
    }

    
}
