package Day7;

public class ConstructorInInheritance {
    public static void main(String[] args) {
        B obj=new B();
        obj.num=10;
    }
    
}


class A{
    A()
    {
        System.out.println("Its A");
    }
}

class B extends A{
    int num;
    B()
    {
        System.out.println("Its B");
    }
}