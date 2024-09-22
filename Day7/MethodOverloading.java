package Day7;

public class MethodOverloading {
    public static void main(String[] args) {
        
        Hello obj=new Hello();
        obj.display();
        obj.display(10);
    }
    
}

class Hello{
    void display(){
        System.out.println("Hello");
    }
    void display(int num){
        System.out.println("Hi");
    }
}