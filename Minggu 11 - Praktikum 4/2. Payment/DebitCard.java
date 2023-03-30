class DebitCard implements IPaymentMethod {
    private double balance;

    // TODO
    // Inisialisasi balance menjadi 0
    public DebitCard() {
        this.balance = 0.00;
    }

    // TODO
    // Getter
    public double getBalance() {
        return this.balance;
    }

    // TODO
    // Menambahkan amount ke balance
    // Mengembalikan true
    public boolean deposit(double amount) {
        this.balance += amount;
        return true;
    }

    // TODO
    // Mengurangi amount dari balance
    // Mengembalikan false apabila amount melebihi balance
    public boolean withdraw(double amount) {
        if (amount > this.balance) {
            return false;
        } else {
            this.balance -= amount;
            return true;
        }
    }

    // TODO
    // Mengurangi amount dari balance
    // Mengembalikan false apabila amount melebihi balance
    public boolean pay(double price) {
        if (price > this.balance) {
            return false;
        } else {
            this.balance -= price;
            return true;
        }
    }
}