package Day6;
import java.util.Scanner;

public class InputSample {
    public static void main(String arr[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter 2 NUmbers : ");

        int num1=s.nextInt();
        int num2=s.nextInt();
        int sum=num1+num2;

        System.out.println("Entered numbers are "+num1+" "+num2);
        System.out.println("Result is "+sum);
        s.close();
    }
}
