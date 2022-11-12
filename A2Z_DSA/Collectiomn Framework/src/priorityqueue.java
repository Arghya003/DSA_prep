import java.util.*;
public class priorityqueue{
    public static void main(String args[]){
        Queue<Integer> c= new PriorityQueue<>();
        c.offer(10);
        c.offer(20);
        c.offer(30);
        c.offer(40);
        c.offer(50);
        System.out.println(c); 
        c.poll(); // fifo
        System.out.println(c);
    }
}