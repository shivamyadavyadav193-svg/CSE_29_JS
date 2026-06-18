package abes.com;

public class Exp10 {

    public static void main(String[] args) {

        SavingsAccount sa = new SavingsAccount(101, "Rahul", 10000);

        CurrentAccount ca = new CurrentAccount(102, "Anita", 20000);

        System.out.println("----- Savings Account -----");

        sa.deposit(2000);
        sa.displayDetails();
        sa.calculateInterest();

        System.out.println();

        System.out.println("----- Current Account -----");

        ca.deposit(3000);
        ca.displayDetails();
        ca.calculateInterest();
    }
}