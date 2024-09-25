package Day8.ThreadSample;

public class SampleThread2 implements Runnable{
    @Override
    public void run() {
        
        for(int i=0;i<10;i++)
        {
            System.out.println("Thread count :"+i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    public static void main(String[] args) {
        SampleThread2 st1=new SampleThread2();
        SampleThread2 st2=new SampleThread2();
        SampleThread2 st3=new SampleThread2();
        Thread t1=new Thread(st1);
        Thread t2=new Thread(st2);
        Thread t3=new Thread(st3);
        t1.start();
        t2.start();
        t3.start();
    }

}
