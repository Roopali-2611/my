package JAVA.oops;
class user{
    public String username;
    public String email;
    public int age;
}
public class main {
    public static void main(String[] args) {
    
        user user1=new user();
        user1.username="username";
        user1.email="not found"; 
        user1.age=0;
        System.out.println(user1.username);
        System.out.println(user1.email);
        System.out.println(user1.age);
    }


}

    

