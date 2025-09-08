//move all zero elements to end

import java.util.Arrays;

class shift{
    int[] array;
    int pos=0;
    public void movezero(){
        for (int i = 0; i < array.length; i++) {
            
            if (array[i]!=0) {
                array[pos]=array[i];
                pos++;
            }
            
        }
        for (int j = pos; j <array.length; j++) {
            array[j]=0;
            
        }
        System.out.println("the needed array is "+ Arrays.toString(array));
    }
    
    
    
    
}
    public class lc283{
    public static void main(String[] args) {
        shift a1 = new shift();
        a1.array = new int[]{0,0,1,1,0,0,0,0,0,0,0};
        a1.movezero();
    }
}