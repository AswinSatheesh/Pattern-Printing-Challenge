import java.util.Scanner;
public class Mirror_Rigntangle{
    public static void main(String[] args)
    {
 	System.out.println("Enter the no. of rows:\n");
        Scanner sc = new Scanner(System.in);
        int row  = sc.nextInt();
        for(int i = 1;i <= row; i++)
        {
                for(int j=0; j < row-i; j++)
                {
                        System.out.print(" ");
                        
                }
                for(int k =0; k < i; k++)
                {
                        System.out.print("*");
                }
                System.out.println();
        }             
    }
}