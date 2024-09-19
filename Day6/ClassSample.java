package Day6;

public class ClassSample {
    int num1;
    int num2;
}


class Hello{
    public static void main(String ar[]) {
        ClassSample s1=new ClassSample();
        ClassSample s2=new ClassSample();

        s1.num1=10;
        s2.num1=70;
        s1.num2=150;
        s2.num2=200;
        System.out.println("S1 :"+s1.num1+" "+s1.num2);
        System.out.println("S2 :"+s2.num1+" "+s2.num2);
    }
}