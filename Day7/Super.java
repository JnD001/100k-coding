package Day7;

public class Super {
    public static void main(String[] args) {
        B obj=new B(20);
        obj.display();
    }
}

class A{
    int num;
    A()
    {
        System.out.println("Its A constructor");
    }
    A(int number)
    {
        System.out.println("Its A  argument constructor");
    }
    void display()
    {
        System.out.println("Its A ");
    }
}

class B extends A{
    int num=20;
    B()
    {
        System.out.println("Its B constructor");
    }
    B(int number)
    {
        // super(10);
        System.out.println("Its B  argument constructor");
    }
    void display()
    {
        System.out.println("Its B "+num);
        super.display();
        super.num=100;
        int c=num+super.num;
        System.out.println(c);
    }
}