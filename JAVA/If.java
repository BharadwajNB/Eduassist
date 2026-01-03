import java.io.*;
import java.util.*;
class If
{
    static public void main(String ba[])
	{
		int a,b;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a , b values: ");
		a=s.nextInt();
		b=s.nextInt();
		if(a>b)
		{
			System.out.println("A is bigger");
		}
		else
		{
			System.out.println("B is bigger");
		}
 	}
}