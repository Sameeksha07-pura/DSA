import java.util.Scanner;

class Student{
    private int usn;
    private String name;
    Student(int u,String n)
    {
        this.usn=u;
        this.name=n;
    }
public void printData(){


    System.out.println(usn+"\t"+name);
}
}
public class Cons_demo {
    public static void main(String[] args) {
        int i;
        Student [] s=new Student[3];
        Scanner obj=new Scanner(System.in);
        for(i=0;i<3;i++){
            int u=obj.nextInt();
            String n=obj.next();
            s[i]=new Student(u,n);
                }
                for(i=0;i<3;i++)
                {
                    s[i].printData();
                }
      
        
    }
}

