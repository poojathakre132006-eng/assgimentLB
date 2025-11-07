class Logic1 {
    void CheckEvenOdd(int num) {
        if ((num % 2) == 0) {
            system.out.println("number is even");
        } else {
            system.out.println("number is odd");
        }
    }
}

class program {
    public static void main(string args[]) {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
    }
}