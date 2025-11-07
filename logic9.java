class logic9 {
    void checkPrime(int num) {
        if (num <= 1) {
            system.out.println(num + "is not a prime number");
        }
        boolean isprime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) {
            system.out.println(num + "is prime number");
        } else {
            system.out.println(num + "is not prime number");
        }
    }
}

class program {
    public static void main(string args[]) {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}