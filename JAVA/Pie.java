import java.io.*;
import java.util.*;
class Pie 
{
    static public void main(String nb[])
	{
	    System.out.println("Enter the value of r:");
            Scanner s = new Scanner(System.in);
            float r = s.nextFloat();
            double area = 3.14*r*r;
            System.out.println(area);
 	}
}