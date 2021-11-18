import java.util.Scanner;
import java.util.ArrayList;
//O(n^3) TC
class PalindromicSubStrings {

	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		
		ArrayList<String> a = palindromicSubStrings(s);
		System.out.println(a);
	}

	public static ArrayList<String> palindromicSubStrings(String s) {

		ArrayList<String> a = new ArrayList<>();
		for(int i=0; i<s.length();i++) {
			for(int j=i + 1;j<=s.length();j++) {
				String substr = s.substring(i,j);
				if(isPalindrome(substr)) {
					a.add(substr);
				}
			}
		} 

		return a;
	}

	public static Boolean isPalindrome(String str) {
		int start = 0;
		int end = str.length() - 1;

		while(start < end) {
			if(str.charAt(start) != str.charAt(end))
				return false;
			start++;
			end--;
		}	

		return true;
	}
}