import java.util.Scanner;

class Employee{
    private int empno;
    private String ename;
    private long sal;
    Employee(int u,String N,long S)
    {
        this.empno=u;
        this.ename=N;
        this.sal=S;
    }
    public void printData(){
        System.out.println(empno+"\t"+ename+"\t"+sal);
    }
}
public class cons_demo2 {
    public static void main(String[] args) {
        int i;
        Employee [] e=new Employee[3];
        Scanner obj=new Scanner(System.in);

        for(i=0;i<3;i++)
        {
            int u=obj.nextInt();
            String N=obj.next();
            long S=obj.nextLong();
            e[i]=new Employee(u, N, S);
                }
                for(i=0;i<3;i++)
                {
                    e[i].printData();
                }
 
    }
}
