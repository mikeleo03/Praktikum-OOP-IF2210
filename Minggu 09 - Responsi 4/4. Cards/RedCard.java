class RedCard extends Card {
    public RedCard() {
        super();
    }

    public RedCard(Double number) {
        super(number);
    }

    public Double value() {
        return this.number + 0.3;
    }

    public void printInfo() {
        System.out.println("Kartu Merah: " + this.number);
    }
}