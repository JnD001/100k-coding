package Day7;

public class StaticSample {
    int num1=10;
    static int num2=20;
    public static void main(String ar[]) {
        StaticSample h=new StaticSample();
        System.out.println(h.num1);
        num2=200;
        h.hello();
        System.out.println(num2);
    }

    void hello()
    {
        num2=4857;
    }
}
