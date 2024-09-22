package Day7;

public class Inheritance {
    public static void main(String[] args) {
        B b=new B();
        b.num1=10;
        b.num2=20;
        b.displayA();
        b.displayB();
    }
}

class A{
    int num1;
    void displayA()
    {
        System.out.println("Hi");
    }
}

class B extends A {
    int num2;
    void displayB(){
        System.out.println("How are you");
    }
}