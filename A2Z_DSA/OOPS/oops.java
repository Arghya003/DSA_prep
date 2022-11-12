public class oops {
    public static void  main(String args[]){
        // store 5 roll nos
//        int [] ar= new int[5];
//        // store 5 names
//        String[]name = new String[5];


        // data of 5 students(roll, name, marks)
        int[]rno = new int[5];
        String[] name = new String[5];
        float[] marks= new float[5];

        // we can store these 3 properties into a single class

        // class is the group of properties and functions

        Student[] students= new Student[5];
        Student arghya ; // reference to an object

        arghya = new Student() ;
        System.out.println(arghya);

       // arghya.marks=99;
        //arghya.rno=40;
        //arghya.Name="Arghya Guha";
        System.out.println(arghya.Name);
        System.out.println(arghya.rno);
        System.out.println(arghya.marks);

        //System.out.println(arghya.rno);

        Student Swarava= new Student();
        //constructor defines what happens when your object is created
        // allocates the properties



        //class is an template of an object and object is the instance of the class

        //class is a logical constructor
        // object is a physical reality
        // state of the object-- value from its data type
        // identity-- way the value is stored
        //behaviour

        // objects are stored in heap memory and references in stack memory







    }
    static class Student{
        // data of 5 students(roll, name, marks)
        int rno;
        String Name;
        double marks;
        void greet(){
            System.out.println("my name is "+this.Name);
        }

        Student(){
            this.rno=40;
            this.Name="Arghya";
            this.marks=99.0;

        }

    }
}