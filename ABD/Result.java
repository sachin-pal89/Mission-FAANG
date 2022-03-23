public class Result {
    public static String breakPalindrome(String palindromestr) {
        int indx = -1;
        String newString;
        for (int i = 0; i < palindromestr.length(); i++) {
            if ((int) palindromestr.charAt(i) > 97) {
                indx = i;
                break;
            }
        }
        if (indx != -1) {
            newString = palindromestr.substring(0, indx) + 'a'
                    + palindromestr.substring(indx + 1, palindromestr.length());
            return (newString);
        } else {
            return ("IMPOSSIBLE");
        }
    }

    public static void main(String[] args) {
        System.out.println(breakPalindrome("aaa"));
    }
}
