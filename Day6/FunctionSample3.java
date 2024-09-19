package Day6;

import java.util.Scanner;

public class FunctionSample3 {
    public static void main(String arr[]) {
        System.out.println("Enter 2 Numbers :");
        Scanner s=new Scanner(System.in);
        int num1=s.nextInt();
        int num2=s.nextInt();

        sum(num1, num2);
        s.close();
    }

    static void sum(int a,int b)
    {
        int sum=a+b;
        System.out.println("Result = "+sum);
    }
}
