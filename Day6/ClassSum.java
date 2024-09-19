package Day6;

public class ClassSum {
    int num1,num2,sum;

    void calculateSum()
    {
        sum=num1+num2;
    }

    void display()
    {
        calculateSum();
        System.out.println("Result is "+sum);
    }
}

class Sum{
    public static void main(String ar[])
    {
        ClassSum obj1=new ClassSum();
        ClassSum obj2=new ClassSum();

        obj1.num1=10;
        obj1.num2=20;
        obj2.num1=50;
        obj2.num2=100;

        // obj1.calculateSum();
        // obj2.calculateSum();
        // obj1.display();
        // obj2.display();

        obj1.display();
        obj2.display();
    }
}
