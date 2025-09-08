package JAVA.oops;

class sup{
    void meth1(){
        System.out.println("meth1");
    } 
    void meth2(){
        System.out.println("super meth2");
    }
}
class sub extends sup{
    @Override
    void meth2(){
        System.out.println("sub meth2");
    }
    void meth3(){
        System.out.println("meth3");
    }
}
public class overriding{
    public static void main(String[] args) {
        sup s1=new sup();  
        sub s2=new sub();
        sup s3=new sub();
        s1.meth2();
        s2.meth2();
        s3.meth2();
        s2.meth3();
    }
}