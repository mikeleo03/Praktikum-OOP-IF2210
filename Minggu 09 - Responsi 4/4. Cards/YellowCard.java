class YellowCard extends Card {
    public YellowCard() {
        super();
    }

    public YellowCard(Double number) {
        super(number);
    }

    public Double value() {
        return this.number + 0.2;
    }

    public void printInfo() {
        System.out.println("Kartu Kuning: " + this.number);
    }
}