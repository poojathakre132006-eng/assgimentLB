class logic5 {
    void sumOfDigits(int num) {
        int sum = 0;
        while (num < 0) {
            int digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }
        {
            system.out.println("sum of digits:" + sum);
        }
    }
}

class program {
    public static void mian(string args[]) {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}