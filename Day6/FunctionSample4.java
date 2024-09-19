package Day6;

import java.util.Scanner;

public class FunctionSample4 {
    public static void main(String arr[]) {
        int result=sum();
        System.out.println("Result is "+result);
    }

    static int sum()
    {
        System.out.println("Enter 2 Numbers :");
        Scanner s=new Scanner(System.in);
        int num1=s.nextInt();
        int num2=s.nextInt();
        int sum=num1+num2;
        s.close();
        return sum;
    }
}
