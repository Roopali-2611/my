class rectangle{
    private double lenght;
    private double breadth;
    public rectangle(){
        lenght=1;
        breadth=1;
    }
    public rectangle(double l,double b)
    {
        lenght=l;
        breadth=b; 
    }
    public rectangle(double s){
        lenght=breadth=s;
    }
}
public class constructers {
    public static void main(String[] args) {
        rectangle r=new rectangle(10,5);

    }
    
}
