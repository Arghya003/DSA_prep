import java.util.*;

public class stack {
    public static void main(String args[]){

        Stack <Integer> c= new Stack<>();
        Scanner cs= new Scanner(System.in);

        for(int i=0;i<5;i++){
            System.out.println("Enter your Number");
            int v= cs.nextInt();
            c.push(v);
        }
        System.out.println(c);
        System.out.println(c);

        // push
        c.push(100);
        c.push(200);
        c.push(300);
        c.push(400);
        c.push(500);
        System.out.println(c);

        // peek
        int d= c.peek(); //[100,200,300,400,500]
        System.out.println(d);

        // search
         int e= c.search(200);
         System.out.println(e);



    }
 
}
