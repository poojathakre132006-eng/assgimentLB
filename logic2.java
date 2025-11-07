class logic2 {
    void findFactorial(int num) {
        long Factorial = 1;
        for (int i = 1; i <= num; i++)
            Factorial *= i;
    }

    {
        system.out.println("the factorial of" + num + "is:" + Factorial);
    }
}

class program {
    public static void main(string args[]) {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}