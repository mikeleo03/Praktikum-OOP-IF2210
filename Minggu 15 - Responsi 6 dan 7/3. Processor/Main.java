public class Main {
    // javac *.java
    // java Main
    
    public static void main(String[] args) throws Exception {
        Processor pA = new ImplementorA();
        pA.check();
        pA.run();

        Processor pB = new ImplementorB();
        pB.check();
        pB.run();

        Processor pC = new ImplementorC();
        pC.check();
        pC.run();
    }
}