import java.util.Scanner;
public class inputarray {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);//soon an input will be inserted(can be used for multiple inputs)
        System.out.println("Enter the size of array:");// preheading of a input
        int n = input.nextInt();//finally it is the input
        int[] arr =  new int[n];//the n that was being inputed by user id the size of an array
        System.out.println("Enter"+n+"elements:");// nothing just fancy way to represent the size of the array
        for(int i=0;i<n;i++){//obv the loop for input of elements of an array
            arr[i] = input.nextInt();//each inputed number number will be the element of the array
            System.out.println("Array elements are:");
            for(int num:arr){
                System.out.println(num + " ");
            }  

        }

    }
    
}
