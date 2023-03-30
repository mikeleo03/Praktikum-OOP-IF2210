public class App {
    // javac *.java
    // java App
    
    public static void main(String[] args) throws Exception {
        DaftarBelanja daftar1 = new DaftarBelanja(4);

        daftar1.belanja(10, "kotak merah");
        daftar1.print();
        daftar1.belanja(2, 10, "kotak hijau");
        daftar1.print();
        daftar1.belanja("pisang");
        daftar1.print();
        daftar1.belanja("jambu", 1945);
        daftar1.print();
    }
}