package JAVA.oops;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class listdemo {
    public static void main(String[] args) {
        ArrayList<Integer> all = new ArrayList<>(2);
        ArrayList<Integer> al1 = new ArrayList<>(List.of(50,60,70,80,90));
        all.add(10);
        all.add(0, 26);
        all.addAll(1,al1); 
        all.add(5, 70);
        all.set(4, 8);
        // System.out.println(all.contains(20));
        // System.out.println(all.get(5));
        // System.out.println(all.indexOf(70));
        // System.out.println(all.lastIndexOf(70));
        // for (int i = 0; i < all.size(); i++) { 
        //     System.out.print(all.get(i)+",");
        // }
        for(Iterator<Integer> it = all.listIterator();it.hasNext();)
        while(it.hasNext() ){
            System.out.print(it.next()+",");
        }
        
        // System.out.println(all.contains(20));
        // System.out.println(all.contains(20));
        // System.out.println(all.contains(20));
        // System.out.println(all);

    }
}
