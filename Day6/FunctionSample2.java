package Day6;

import java.util.Scanner;

public class FunctionSample2 {
    public static void main(String arr[]) {
       sum(); 
    }

    static void sum()
    {
        System.out.println("Enter 2 Numbers :");
        Scanner s=new Scanner(System.in);
        int num1=s.nextInt();
        int num2=s.nextInt();
        int result=num1+num2;
        System.out.println("Result is "+result);
        s.close();
    }
}
