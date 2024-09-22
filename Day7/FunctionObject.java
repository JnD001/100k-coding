package Day7;

public class FunctionObject {
    public static void main(String[] args) {
        B objB=new B();
        A objA=new A();
        objA.display(objB);
    }

}

class A{
    void display(B a)
    {
        a.display();
    }
}

class B{
    void display()
    {
        System.out.println("Hello");
    }
}