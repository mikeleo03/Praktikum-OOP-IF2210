/**
 * Animal.java
 * implementasi kelas abstrak Animal
 * Michael Leon Putra Widhi - 13521108
 */

import java.lang.Comparable;

public abstract class Animal implements Comparable<Animal> {
    protected int numberOfLegs;
    protected int children;

    public int getNumberOfLegs() {
        return this.numberOfLegs;
    }

    public int getNumberOfChildren() {
        return this.children;
    }

    public void increaseChild(int inc) {
        this.children += inc;
    }

    abstract int getAnimalPower();

    public int compareTo(Animal m) {
        // compareTo mengembalikan:
        // 0 bila this sama dengan m
        // 1 bila this lebih dari m
        // -1 bila this kurang dari m
        if (getAnimalPower() > m.getAnimalPower()) {
            return 1;
        } else if (getAnimalPower() < m.getAnimalPower()) {
            return -1;
        } else {
            return 0;
        }
    }
}
