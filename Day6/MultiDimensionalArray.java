package Day6;

import java.util.Scanner;

public class MultiDimensionalArray {
    public static void main(String arr[]) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter the Array Elements :");
        
        int [][] array =new int [3][3];
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                 array[i][j]=s.nextInt(); 
            }
        }
        System.out.println("Array Elements :\n");
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
              System.out.print(" "+array[i][j]);
            }
        System.out.println();
        }
        s.close();
    }
    
}