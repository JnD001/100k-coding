package Day6;

import java.util.Scanner;

public class FunctionSample1 {
    public static void main(String arr[]) {
        System.out.println("Enter 2 NUmbers :");
        Scanner s=new Scanner(System.in);

        int num1=s.nextInt();
        int num2=s.nextInt();

        int re=sum(num1, num2);
        System.out.println("Result is "+re);
        s.close();

    }

    static int sum (int a,int b)
    {
        int result=a+b;
        return result;
    }
}
