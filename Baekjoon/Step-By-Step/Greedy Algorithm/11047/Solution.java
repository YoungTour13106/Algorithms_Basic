package stepbystep;

import java.io.IOException;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) throws IOException {
		Scanner scanner = new Scanner(System.in);
		int N=scanner.nextInt();
		int K=scanner.nextInt();
		
		int sum=0;
		
		int[] coins=new int[N];
		for(int i=0; i<N; i++) {
			coins[i]=scanner.nextInt();
		}
		
		while(K!=0) {
			if(coins[N-1] <= K) {
				sum+=(K/coins[N-1]);
				K=(K%coins[N-1]);
			}
			
			N=N-1;
		}
		
		System.out.println(sum);
	}
}
