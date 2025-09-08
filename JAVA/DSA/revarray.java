public class revarray{
    public static void reverse(int num[]){
        int first=0;
        int last=num.length-1;
        while(last>first){
            int temp=num[first];
            num[first]=num[last];
            num[last]=temp;
            first++;
            last--;
        }

    }
    public static void main(String[] args) {
        int num[]={1,2,3,4,5,6,7};
        System.out.print("(");
        for (int i = 0; i <num.length; i++) {
            System.out.print(num[i]+" ");
        }
        System.out.print(")");

    }
}