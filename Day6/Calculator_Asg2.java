package Day6;

import java.util.Scanner;

public class Calculator_Asg2 {
    int result;

    void addition(int num1,int num2)
    {
        result=num1+num2;
        System.out.println("Result is "+result);
    }
    void subtraction(int num1,int num2)
    {
        result=num1-num2;
        System.out.println("Result is "+result);
    }
    void multiplication(int num1,int num2)
    {
        result=num1*num2;
        System.out.println("Result is "+result);
    }
    void division(int num1,int num2)
    {
        if(num2==0)
        {
            System.out.println("Division by zero is not allowed");
        }else{
            result=num1/num2;
            System.out.println("Result is "+result);
        }
    }
}

class Operator{
    public static void main(String ar[]) {
        System.out.println("Enter 2 numbers :");
        Scanner sc=new Scanner(System.in);
        Calculator_Asg2 obj1=new Calculator_Asg2();
        int num1=sc.nextInt();
        int num2=sc.nextInt();


        System.out.println("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nChoose Your Operator :");
        int choice=sc.nextInt();
        switch (choice) {
            case 1:
                obj1.addition(num1, num2);
                break;
            case 2:
                obj1.subtraction(num1, num2);
                break;
            case 3:
                obj1.multiplication(num1, num2);
                break;
            case 4:
                obj1.division(num1, num2);
                break;
            default:
                System.out.println("Invalid choice");
                break;
        }
        sc.close();
    }

}
