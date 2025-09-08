package JAVA.oops;
class data<T>{
    private T la;
    public void setData(T v){
        la =v;
    }
    public T getData(){
        return la;
    }

      
}
public class generics{
    public static void main(String[] args) {
        data<Integer> d=new data<>();
        d.setData(new Integer (10));
        System.out.println(d.getData());

        
    }
}
