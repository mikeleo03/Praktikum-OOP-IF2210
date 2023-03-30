public class App {
    // javac *.java
    // java App
    
    public static void main(String[] args) throws Exception {
        CreditCard cd = new CreditCard();
        System.out.println(cd.getMonthlyBalance());
        System.out.println(cd.getDailyInterest() * cd.getMonthlyLimit());
        System.out.println(cd.getUnpaidBalance());
        System.out.println(cd.getMonthlyLimit());
    }
}