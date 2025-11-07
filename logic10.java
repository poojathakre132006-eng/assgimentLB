class logic10 {
    void printEvenNumber(int n) {
        system.out.println("even numbers up to " + n + ":");
        for (int i = 1; i <= n; i++) {
            if ((i % 2) == 0) {
                system.out.println(i);
            }
        }
    }
}

class program {
    public static void main(string args[]) {
        logic obj = new logic();
        obj.printEvenNumber(20);
    }
}