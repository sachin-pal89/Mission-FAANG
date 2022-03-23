public class Result2 {
    public static String dnaComplement(String s) {
        String revStr = "";
        char ch;
        for (int i = 0; i < s.length(); i++) {
            ch = s.charAt(i);
            if (ch == 'A') {
                ch = 'T';
            } else if (ch == 'T') {
                ch = 'A';
            } else if (ch == 'C') {
                ch = 'G';
            } else if (ch == 'G') {
                ch = 'C';
            }
            revStr = ch + revStr;
        }
        return (revStr);
    }

    public static void main(String[] args) {
        System.out.println(dnaComplement("ATGC"));
    }
}
