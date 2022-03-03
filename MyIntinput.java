import  java.util.Scanner;
public class MyIntinput
{
    public  static void main(String args[])
    {
        Scanner a=new Scanner(System.in);
        Scanner b=new Scanner(System.in);
        int x,y;
        x=a.nextInt()+b.nextInt();
        y=a.nextInt()-b.nextInt();
        System.out.println("x="+x+"\n"+"y="+y);
    }//输入整数
}
