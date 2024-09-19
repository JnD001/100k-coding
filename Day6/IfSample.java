package Day6;

import java.util.Scanner;

public class IfSample {
    public static void main(String arr[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a Number :");
        int num=sc.nextInt();

        if (num<0) {
            System.out.println(num+" is a Negative Number");
        }
        else
        {
            System.out.println(num+" is a Positive Number");
        }
        sc.close();
    }
}
