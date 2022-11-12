
import java.util.ArrayList;
import java.util.List;
public class linkedlist {
    

    public static void main(String args[]){

        List<Integer> c= new ArrayList<>();
        // add
        c.add(5);
        c.add(6);
        c.add(7);
        c.add(8);
        System.out.println(c);

        //remove
        c.remove(2);
        c.remove(0);
        System.out.println(c);


        // get
        int d=c.get(0);
        System.out.println(d);

        for(int i=0;i<c.size();i++)
        System.out.println(c.get(i));

        //set
        c.set(0,9);
        System.out.println(c);

        // contains
          boolean f= c.contains(7);
          System.out.println(f);
          boolean g= c.contains(9);
          System.out.println(g);

        //clear
        c.clear();
        System.out.println(c);
        





    }
}