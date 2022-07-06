import java.util.Scanner;

public class test1 {
    public static void main(String[] args) {
        int a;
        double b;
        System.out.println("Enter values for variables");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextDouble();
        double c=a+b;
        System.out.println("The result is"+(a+b));
    }
}
