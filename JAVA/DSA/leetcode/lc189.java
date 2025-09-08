
import java.util.Arrays;

//rotate the array in right by k elements
class rotate{
    int [] array;
    int [] barray;
    int newindex;
    int k;
    void rotation(){
        barray=new int[array.length];
        for (int i = 0; i <array.length; i++) {
            newindex = (i + k) % array.length;
            barray[newindex]=array[i];
        }
        System.out.println(Arrays.toString(barray));
    }
}
public class lc189{
    public static void main(String[] args) {
        rotate a1 = new rotate();
        a1.k=3;
        a1.array = new int[]{1,2,3,4,5,6,7,8,9};
        a1.rotation();
        
    }
}