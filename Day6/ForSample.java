package Day6;

import java.util.Scanner;

public class ForSample {
    public static void main(String arr[]) {
        System.out.println("Enter a number :");
        Scanner sc=new Scanner(System.in);
        int sum=0;
        int num=sc.nextInt();
        for(int i=0;i<=num;i++)
        {
            sum=sum+i;
        }
        System.out.println("Result is "+sum);
        sc.close();
    }
}
