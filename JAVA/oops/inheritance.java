package JAVA.oops;
class circle
{
    public double radius;
    public double area()
    {
        return Math.PI*radius*radius;
    }
    public double peimeter()
    {
        return 2*Math.PI*radius;
    }
    
}
class cylinder extends circle{
    public double height;
    public double volume()
    {
        return  area()*height;
    }
}
public class inheritance {
    public static void main(String[] args) {
        cylinder c=new cylinder();
        c.radius=7;
        c.height=14;
        System.out.println("volume of cylinder is "+c.volume());
        System.out.println("area of circle " + c.area());
    }
}
