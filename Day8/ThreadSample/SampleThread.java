package Day8.ThreadSample;

public class SampleThread extends Thread {
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
        SampleThread st1 = new SampleThread();
        SampleThread st2 = new SampleThread();
        SampleThread st3 = new SampleThread();
        st1.start();
        st2.start();
        st3.start();
    }
}
