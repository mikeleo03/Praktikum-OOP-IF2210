// Implementasi Kelas Kompleks

class Kompleks {
    // private
    private static int n_kompleks = 0;
    private int real;
    private int imaginer;

    // public
    public Kompleks() {
        this.real = 0;
        this.imaginer = 0;
        n_kompleks++;
    }

    public Kompleks(int real, int imaginer) {
        this.real = real;
        this.imaginer = imaginer;
        n_kompleks++;
    }

    public int getReal() {
        return this.real;
    }

    public int getImaginer() {
        return this.imaginer;
    }

    public void setReal(int real) {
        this.real = real;
    }

    public void setImaginer(int imaginer) {
        this.imaginer = imaginer;
    }

    public Kompleks plus(Kompleks b) {
        Kompleks r = new Kompleks();
        r.real = this.real + b.real;
        r.imaginer = this.imaginer + b.imaginer;
        return r;
    }

    public Kompleks minus(Kompleks b) {
        Kompleks r = new Kompleks();
        r.real = this.real - b.real;
        r.imaginer = this.imaginer - b.imaginer;
        return r;
    }

    public Kompleks multiply(Kompleks b) {
        Kompleks r = new Kompleks();
        r.real = (this.real * b.real) - (this.imaginer * b.imaginer);
        r.imaginer = (this.imaginer * b.real) + (this.real * b.imaginer);
        return r;
    }

    public Kompleks multiply(int num) {
        Kompleks r = new Kompleks();
        r.real = this.real * num ;
        r.imaginer = this.imaginer * num;
        return r;
    }

    public static int countKompleksInstance() {
        return n_kompleks;
    }

    public void print() {
        if (this.real != 0 || this.imaginer == 0) {
            System.out.print(this.real);
        }
        if (this.real != 0 && this.imaginer > 0) {
            System.out.print("+");
        }
        if (this.imaginer != 0) {
            if (this.imaginer == 1) {
                System.out.println("i");
            } else if (this.imaginer == -1) {
                System.out.println("-i");
            } else {
                System.out.println(this.imaginer + "i");
            }
        } else {
            System.out.println();
        }
    }
}