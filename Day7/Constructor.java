package Day7;

public class Constructor {
    public static void main(String ar[]) {
        Sample s=new Sample(); 
//Syntax : ClassName  objectName = new (Keyword)   Constructor; 
        s.num=10;
        
    }
}

class Sample{
    int num;
    Sample()    //Constructor
    {
        System.out.println("This is a Constructor");
    }
}