class GreenCard extends Card {
    public GreenCard() {
        super();
    }

    public GreenCard(Double number) {
        super(number);
    }

    public Double value() {
        return this.number;
    }

    public void printInfo() {
        System.out.println("Kartu Hijau: " + this.number);
    }
}