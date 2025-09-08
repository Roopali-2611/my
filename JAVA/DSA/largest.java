public class largest {
    public static void main(String[] args) {
        int [] arr={-3,-78,-87,-45,-32};           //initialising array
        int max = arr[0];                 //saying that first element of array is maximum
        int ans=maximum(arr);             //here we are acessing the class with maximum(arr) as the class is maximum(int []a) by a we mean array and by putting maximum("arr") here we mean that all the things that were defined for the array in class will be applicable for array arr also and the class is called from here
        System.out.println(ans);  //by this sout code we are printing the index of the largest number  

    }
    static int maximum(int[] a){ //here this the class named maximum and (int[] a) is pased like a parameter or like variable 
        int max = a[0];//did the same thing again don't know why
         
         for (int i = 0; i < a.length; i++) { //initalised a for  loop to check each element 
            if(max<a[i]){ //main conditions for maximum
                max=a[i]; //got the maximum number
            }
             
         }
         return max;//this method or function will be returning the value of max wherever and whenever it will be called 

    }
}
