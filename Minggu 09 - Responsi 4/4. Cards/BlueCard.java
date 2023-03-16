class BlueCard extends Card {
    public BlueCard() {
        super();
    }

    public BlueCard(Double number) {
        super(number);
    }

    public Double value() {
        return this.number + 0.1;
    }

    public void printInfo() {
        System.out.println("Kartu Biru: " + this.number);
    }
}