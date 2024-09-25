package hello.hi;

public class MyPackage {
    public void display(){
        System.out.println("This is a Package Sample");
    }
}

// import hello.hi.MyPackage;
class Sample{
    public static void main(String[] args) {
        MyPackage obj=new MyPackage();
        obj.display();
    }
}