package Day6;

public class ClassFunctionSample {
    int num1;
    int num2;
    void display()
    {
        System.out.println("num1 :"+num1+"   num2 :"+num2);
    }
}

class Function{
    public static void main(String ar[]) {
        
        ClassFunctionSample obj1=new ClassFunctionSample();
        ClassFunctionSample obj2=new ClassFunctionSample();
        
        obj1.num1=20;
        obj1.num2=100;
        obj2.num1=50;
        obj2.num2=200;

        obj1.display();
        obj2.display();
    }
}