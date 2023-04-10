public class ll{
    private node head;
    private node tail;
    private int size;
    public ll(){
        this.size=0;
    }

    public void insertFirst(int val){
        node node= new node(val);
        node.next=head;
        head=node;
        if(tail==null){
            tail=head;
        }
        size+=1;
    }
    public void insertLast(int val){
        node node= new node(val);
        if(tail==null){
            insertFirst(val);
            return;
        }
        tail.next=node;
        tail=node;
        size++;
    }
    public void insert(int val, int index){
        if(index==0)
        {
            insertFirst(val);
            return;
        }
        if(index==size){
            insertLast(val);
            return;
        }
        node temp =head;
           for(int i=1;i<index;i++){
            temp=temp.next;
           }

           node node= new node(val,temp.next);
           temp.next=node;

           size++;
    }

    public void deleteFirst(){
        int val= head.val;
        head=head.next;

        if(head==null)
        tail=null;
    }
    public void display(){
        node temp= head;
        while(temp!=null){
            System.out.print(temp.val+" -> ");
            temp=temp.next;
        }
        if(temp==null)
        System.out.print("END");
    }

    
    private class node{
        private int val;
        private node next;



    
    public node(int v){
        this.val=v;
    }
    public node(int v, node next){
        this.val=v;
        this.next=next;
    }
}
}
