/**
 * Gajah.java
 * Gajah sebagai turunan dari kelas abstrak Animal
 * Michael Leon Putra Widhi - 13521108
 */

public class Gajah extends Animal {
    private int basePower;
    private int age;

    public Gajah(int basePower, int age) {
        this.basePower = basePower;
        this.age = age;
        this.numberOfLegs = 4;
    }

    public int getAge() {
        return this.age;
    }

    public int getAnimalPower() {
        return 3 * (this.basePower + this.age + this.children);
    }
}