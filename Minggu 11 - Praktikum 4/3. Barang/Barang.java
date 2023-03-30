public class Barang {
    protected String Nama;
    protected int Amount;

    public Barang(String Nama, int Amount) {
        this.Nama = Nama;
        this.Amount = Amount;
    }

    public String toString() {
        return String.format("%d %s", this.Amount, this.Nama);
    }
}