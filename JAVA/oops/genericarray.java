package JAVA.oops;
class myArray<T>{
    T a[]=(T[]) new Object[10];//by t we have typcasted object as generic
    int lenght=0;
    public void append(T v){
        a[lenght++]=v;
    }
    public void display(){
        for(int i=0;i<lenght;i++){
            System.out.println(a[i]);
        }
    }
}
public class genericarray {
    public static void main(String[] args) {
        myArray ma =new myArray<>();
        ma.append(10);
        ma.append(new String("hello  "));
        ma.append(40);
        ma.display();
    }
    
}
