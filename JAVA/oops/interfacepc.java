package JAVA.oops;

interface test{
    void meth1();
    void meth2();

}
class my implements test{
    public void meth1()
    {
        System.out.println("meth1 of class my");
    }
    public void meth2()
    {
        System.out.println("meth2 of class my");
    }
    public void meth3()
    {
        System.out.println("meth3 of my class");
    }
}

public class interfacepc {
    public static void main(String[] args) {
       test t=new my();
       t.meth1();
       t.meth2();
    }
    
}
