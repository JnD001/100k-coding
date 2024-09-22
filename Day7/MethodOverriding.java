package Day7;

public class MethodOverriding {
    public static void main(String[] args) {
        B obj=new B();
        obj.display();;
    }
}

class A{
    void display()
    {
        System.out.println("Its A");
    }
}

class B extends A{
    void display()
    {
        System.out.println("Its B");
    }
}