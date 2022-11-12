import java.util.*;
public class hashset {
    public static void main(String args[]){
         Set<Integer> c= new HashSet<>();
         c.add(10);
         c.add(20);
         c.add(30);
         c.add(40);
         c.add(50);
        
       
         System.out.println(c); // unordered
         c.remove(20);
         System.out.println(c); 
          int d= c.size();
          System.out.println(d);
          System.out.println(c.contains(30));
          c.clear();
          System.out.println(c);
    }
    
}
