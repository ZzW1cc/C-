import java.util.Scanner;
public class AreaOfCircle
{
    public static void main(String args[])
    {
        Scanner input= new Scanner (System.in);
        System.out.println("输入半径");
        double radius= input.nextDouble();
        double area;
        area= radius* radius* 3.14159;
        System. out. println("The radius is "+ radius);
        System. out. println("The area of the circle is "+ area);
    }
}