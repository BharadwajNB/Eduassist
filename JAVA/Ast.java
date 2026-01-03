import java.io.*;
import java.util.*;
class Ast {
    public static void main(String[] args) {
        int n , int temp = n, sum = 0;
         
	Scanner s = new Scanner(System.in);
	System.out.print("Enter a Number : ");
	n = s.nextInt();
       
        while (temp > 0) {
            int r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }

        if (sum == n)
            System.out.println("Armstrong Number");
        else
            System.out.println("Not an Armstrong Number");
    }
}
