package JAVA.oops; 
class Super
{
    public void display()
    {
        System.out.println("super class display");
    }
}
class sub extends Super{
   
    public void display()
    {
        System.out.println("sub class display"); 
    }
}
public class overriding {
    public static void main(String[] args) {
        Super sup=new sub();
        sup.display();
    }
}
