package Day6;

import java.util.Scanner;

public class Prime_Asg1 {
    public static void main(String ar[]) {
        System.out.println("Enter a Number :");
        Scanner sc=new Scanner(System.in);
        
        int flag=0;
        int num=sc.nextInt();
        for(int i=2;i<num/2;i++)
        {
            if(num%2==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1) 
        {
            System.out.println("Entered number is not a Prime Number");
        } else
        {
            System.out.println("Entered number is a Prime Number");
        }
        sc.close();
    }
}
