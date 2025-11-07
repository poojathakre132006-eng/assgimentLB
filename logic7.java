class logic7 {
    void findMax(int a, int b) {
        if (a > b) {
            system.out.println(a + "is the maximum number ");
        } else if (b > a) {
            system.out.println(b + "is the maximum number.");
        } else {
            system.out.println("both number are equal");
        }
    }
}

class program {
    public static void main(string args[]) {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}