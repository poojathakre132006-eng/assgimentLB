class logic13 {
    void checkSign(int num) {
        if (num > 0) {
            system.out.println("the number is positive:");
        } else if (num < 0) {
            system.out.println("the number is negative:");
        } else {
            system.out.println("the number is zero");
        }
    }
}

class program {
    public static void main(string args[]) {
        logic obj = new logic();
        obj.checkSign(-8);
    }
}