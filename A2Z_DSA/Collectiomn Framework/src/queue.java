import java.util.*;
public class queue {
    public static void main(String args[]){
        Queue<Integer> c = new LinkedList<>();
        c.offer(10);
        c.offer(20);
        c.offer(30);
        c.offer(40);
        c.offer(50);
        System.out.println(c);
        // peek-FIFO

        System.out.println(c.peek());
        // poll
        c.poll();
        c.poll();
        
        System.out.println(c);
         
    }
    
}
