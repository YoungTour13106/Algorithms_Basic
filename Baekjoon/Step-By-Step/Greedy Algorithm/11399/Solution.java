package stepbystep;

import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {
	
	public static void main(String[] args) throws IOException {
		Scanner scanner = new Scanner(System.in);
		int N=scanner.nextInt();
		int[] times = new int[N];
		int time=0, sum=0;
		
		for(int i=0; i<N; i++) {
			times[i]=scanner.nextInt();
		}
		
		Arrays.sort(times);
		
		for(int i=0; i<times.length; i++) {
			time=time+times[i];
			
			sum+=time;
		}
		
		System.out.println(sum);
	}
}
