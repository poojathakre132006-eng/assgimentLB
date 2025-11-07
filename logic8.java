class logic8 {
    void printTable(int num) {
        for (int i = 1; i <= 10; i++) {
            system.out.println(num + "*" + i + "=" + (num * i));
        }
    }
}

class program {
    public static void main(string args[]) {
        Logic Obj = new Logic();
        Obj.printTable(5);
    }
}