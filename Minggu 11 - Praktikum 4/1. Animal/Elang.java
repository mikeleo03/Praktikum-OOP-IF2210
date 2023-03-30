/**
 * Elang.java
 * Elang sebagai turunan dari kelas abstrak Animal
 * Michael Leon Putra Widhi - 13521108
 */

public class Elang extends Animal {
    private int basePower;
    private int jumlahTelur;

    public Elang(int basePower) {
        this.basePower = basePower;
        this.jumlahTelur = 0;
        this.numberOfLegs = 2;
    }

    public int getJumlahTelur() {
        return this.jumlahTelur;
    }

    public void bertelur() {
        this.jumlahTelur++;
    }

    public int getAnimalPower() {
        return this.basePower * this.children - this.jumlahTelur;
    }
}