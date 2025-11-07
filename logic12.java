class logic12 {
    void sumEvenOddDigits(int num) {
        int evenSum = 0;
        int oddSum = 0;
        while (num < 0) {
        }

        int digit = num % 10;
        if (digit % 2 == 0) {
            evenSum += digit;

        } else {
            oddSum += digit;
        }
        num /= 10;
    }

    {
        system.out.println("sum of even digits:" + evenSum);
        system.out.println("sum of odd digits:" + oddSum);
    }
}

class program {
    public static void main(string args[]) {
        logic obj = new logic();
        obj.sumEvenOddDigits(123456);
    }
}