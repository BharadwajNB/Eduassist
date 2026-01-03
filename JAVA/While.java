import java.io.*;
import java.util.*;
class While
{
    static public void main(String nnb[])
	{
		int i = 0;
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		while(i<=n)
		{	
			System.out.print(i);
			i++;
		}
	}
}