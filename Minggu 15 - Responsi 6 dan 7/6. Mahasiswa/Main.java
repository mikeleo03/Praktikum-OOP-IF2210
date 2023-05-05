public class Main {
    public static void main(String[] args) {
        try {
            Mahasiswa mhs1 = new Mahasiswa(13521108, 4.00);
            MahasiswaDecoder mhsdc1 = new MahasiswaDecoder(mhs1);

            System.out.println(mhsdc1.getNIM());
            System.out.println(mhsdc1.getIPK());
            mhsdc1.addMatkul("IF2110 - Algoritma dan Struktur Data");
        } catch (Exception e) {
            System.out.println("HAHAHHAHAH");
        }
    }
}
