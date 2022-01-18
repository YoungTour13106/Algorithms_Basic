package stepbystep;

import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {
	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);
				
		int[] cnts = new int[26];
		Arrays.fill(cnts, -1);
		
		String s = sc.next();
		
		for(int i=0; i<s.length(); i++) {
			char ch = s.charAt(i);
			if(cnts[ch-97] == -1) {
				cnts[ch-97]=i;	
			}		
		}
		
		
		for(int i=0; i<cnts.length; i++) {
			System.out.println(cnts[i]);
		}
	}
}
