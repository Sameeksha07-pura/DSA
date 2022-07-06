import java.util.Scanner;

public class string {
    public static void main(String[] args) {
        String str1,str2;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter values for variables");
        
        str1=sc.next();
        str2=sc.next();
       String str3=str1+str2;
        System.out.println("Concatenate two string"+str3);
    }
}
