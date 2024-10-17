import java.util.Scanner;

public class Main{
    
    static int gcd(int a , int b)
    {
        if (a==0)
        {
            return b;
        }
        return gcd(b%a,a);
        
    }
    
    static int lcm(int a,int b)
    {
        
        return (a/gcd(a,b))*b;
    }
    public static void main(String[] args){
        
        Scanner input=new Scanner (System.in);
        int a = input.nextInt();
        int b= input.nextInt();
        System.out.printf("The lcm of %d and %d is %d",a,b,lcm(a,b));
    }
}