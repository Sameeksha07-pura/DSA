import java.util.Scanner;

public class array
 {
public static void main(String[] args) {
 int a[];
 int i;
 a=new int[3];
 Scanner sc=new Scanner(System.in);
 System.out.println("Enter array values");
 for(i=0;i<3;i++)
a[i]=sc.nextInt();
System.out.println("Print array valus");
for(i=0;i<3;i++)
System.out.println(a[i]);
}    
}
