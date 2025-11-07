class logic4 {
    void countDigits(int num) {
        if (num == 0) {
            system.out.println("the number of digit is:1");

        }
        int count = 0;
        while (num != 0) {
            num /= 10;
            ++count;
        }
        {
            system.out.println("the number of digit is:" + count);
        }
    }
}