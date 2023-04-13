public class App {
    // javac *.java
    // java App
    
    public static void main(String[] args) throws Exception {
        Enclosure<Animal> enc = new Enclosure<Animal>();
        enc.addAnimal(new Lion("Amin", 25));
        enc.addAnimal(new Panda("Budi", 20));
        Animal animal = enc.getAnimalAt(0);
        animal.eat();
        enc.describe();
        enc.feed();
        System.out.println(enc.safeForPetting());
        enc.removeAnimalAt(0);
        System.out.println(enc.safeForPetting());
        enc.describe();
    }
}