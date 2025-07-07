public class conditions{
    public static void main(String[] args) {
        int x=2600;
        if(x<2500){
            x+=2000;
        }
        else if (x==2500){
            x+=10;
        }
        else{
            x+=100;
        }
        System.out.println(x);
    }
}