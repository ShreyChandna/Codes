import java.util.Scanner;

public class Arm {
    
public static void main(String[] args) 
{   Scanner sc=new Scanner(System.in);
    int temp,sum=0;
    System.out.println("enter the Number");
    int a=sc.nextInt();
    int b=a;
    while(b!=0)
    {temp=b%10;
    sum+=temp*temp*temp;
    b=b/10;}
    if(sum==a)
    System.out.println("it is an armstrong number");
    else
    System.out.println("not an armstrong number");
    sc.close();
}
}
