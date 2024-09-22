package Day7;

public class Hello {
    public static void main(String a[]) {   
        First f=new First();
        f.displayFirst();
    }
}

class First{
    void displayFirst(){
        Final f=new Final();
        f.displayFinal();
    }
}

class Final{
    void displayFinal(){
        System.out.println("Hi ,\nHow are You");
    }

}
