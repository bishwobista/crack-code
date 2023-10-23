public class IntegerToRoman {
    public static String intToRoman(int num) {
        int[] values = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
        String[] romanSymbols = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

        StringBuilder result = new StringBuilder();
        int i = 0;

        while (num > 0) {
            if (num >= values[i]) {
                result.append(romanSymbols[i]);
                num -= values[i];
            } else {
                i++;
            }
        }

        return result.toString();
    }
