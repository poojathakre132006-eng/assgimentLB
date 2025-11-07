class logic6 {
    void checkPalindrom(int num) {
        int originalNum = num;
        int reverseNum = 0;
        while (num != 0) {
            int remainder = num % 10;
            reverseNum = reverseNum * 10 + remainder;
            num = num / 10;
        }
        if (originalNum == reverseNum) {
            system.out.println(originalNum + "is a palindrom number");
        } else {
            system.out.println(originalNum + "is a not palindrom number");
        }
    }
}

class program {
    public static void main(string args[]) {
        Logic obj = new Logic();
        obj.checkPalindrom(121);
    }
}