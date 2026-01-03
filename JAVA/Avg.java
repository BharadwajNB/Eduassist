import java.io.*;

class Avg 
{
	public static void main(String args[])
	{
 		int a =Integer.parseInt(args[1]);
		int b =Integer.parseInt(args[2]);
		int c =Integer.parseInt(args[3]);
		int d =Integer.parseInt(args[4]);
		int e =Integer.parseInt(args[5]);
		float f =((a+b+c+d+e)/5);
		System.out.println(args[0]);
		System.out.println("The student " + args[0] + " got Average of " + f);
	}
}