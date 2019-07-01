import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;

    // Add your code here
    Difference(int[] elements){
        this.elements = elements;
    }
    public void computeDifference(){
        int v_max = Integer.MIN_VALUE, v_min = Integer.MAX_VALUE;
        for(int i=0; i<elements.length; i++){
            if(elements[i]>v_max){
                v_max = elements[i];
            }
            if(elements[i]<v_min){
                v_min = elements[i];
            }
        }
        this.maximumDifference = v_max-v_min;
    }

} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}