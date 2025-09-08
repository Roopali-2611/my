class students{
    String name;
    String classname;
    int roll;
    students(String n,String c,int r){
        name = n;
        classname = c;
        roll = r;
    }
    void display(){
        System.out.println(name);
        System.out.println(classname);
        System.out.println(roll);
    }
    }
public class student {
    public static void main(String[] args) {
        students s1= new students("roopali","cse",61);
        s1.display();
        System.out.println("---------");
        students s2 = new students("moon","cse",62);
        s2.display();
    }
    
}
