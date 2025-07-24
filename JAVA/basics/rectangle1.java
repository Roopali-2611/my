class rectangle{
    private int lenght;
    private int breadth;
    public int getlenght(){
        return lenght;
    }
    public int getbreadth(){
        return breadth;
    }
    public void setlenght(int l){
        lenght=l;
    }

    public void setbreadth(int b){
        breadth=b;
    }
    public int area(){
        return lenght*breadth;
    }
    public int perimeter(){
        return 2*(lenght+breadth);
    }
}
public class rectangle1 {

public static void main(String[] args) {
    rectangle r1 = new rectangle();
    r1.setlenght(5);
    r1.setbreadth(7);
    System.out.println("area is " + r1.area());
    System.out.println("perimeter is" + r1.perimeter());
    System.out.println(r1.getlenght());
    System.out.println(r1.getbreadth());

}
    
}
