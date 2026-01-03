import java.io.*;
import java.util.*;
class Fs {
    public static void main(String[] args) {
        int N = 100;
        int a = 0, b = 1, sum = 0;

        while (a <= N) {
            if (a % 2 == 0)
                sum += a;
            int c = a + b;
            a = b;
            b = c;
        }
        System.out.println("Sum = " + sum);
    }
}
