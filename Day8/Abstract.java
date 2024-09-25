package Day8;

public class Abstract extends Hello{
    void onText(String text)
    {
        System.out.println(text);
    }
    Abstract()
    {
        TextScanner ts=new TextScanner(this);
        ts.scan();
    }
    public static void main(String[] args) {
        Abstract obj=new Abstract();
    }
}

abstract class Hello{
    abstract void onText(String text);
}

class TextScanner{
    Hello obj;
    TextScanner(Hello obj)
    {
        this.obj=obj;
    }
    void scan()
    {
        obj.onText("Scanned Text");
    }
}
