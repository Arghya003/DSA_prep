public class main {
     public static void main(String args[]){
        ll list = new ll();
        list.insertFirst(3);
        list.insertFirst(2);
        list.insertFirst(8);
        list.insertFirst(17);;
        list.insertLast(99);
        list.insert(100, 3);

        list.display();
       list.deleteFirst();
       System.out.println();
        list.display();
     }
}
