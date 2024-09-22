package Day7;

public class ThisSample {
    public static void main(String ar[]) {
        Sample s=new Sample(100,20);
        s.a=50;
    }
}

class Sample{
    int a,num1=200,num2=300;
    Sample(int num1,int num2)
    {
        this.num1=num1;
        System.out.println(this.num1+" "+num2);
    }
}
