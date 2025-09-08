
import java.util.Arrays;

public class bubblesort {
    public static void main(String[] args) {
        int[] arr ={123,345,532,32,234,565,440};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void bubble(int[] arr){
        boolean swaped;
        for (int i = 0; i < arr.length; i++) {
            swaped=false;
            for (int j = 0; j <arr.length-i-1; j++) {
                if(arr[j]>arr[j+1]){
                    //swap 
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swaped=true;

                }
                
            }
            //if you didn't swap for a particular value of i,it means the array is sorted hence stop the program 
            if(!swaped){
                break;
            }
        }
    }
}
