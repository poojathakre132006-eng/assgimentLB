class logic11 {
    void printOddNumber(int n) {
        system.out.println("odd number up to " + n + ":");
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                system.out.println(i);
            }
        }
    }
}

class program {
    public static void main(string args[]) {
        logic obj = new logic();
        obj.printOddNumber(20);

    }
}