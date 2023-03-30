public class DaftarBelanja {
    private Barang[] listBelanja;
    private int size;
    private int capacity;

    public DaftarBelanja(int Max) {
        this.size = 0;
        this.capacity = Max;
        this.listBelanja = new Barang[this.capacity];
    }

    public void belanja(int lorong, String keterangan) {
        String namaBarang = keterangan + " (lorong " + lorong + ")";
        if (this.size < this.capacity) {
            this.listBelanja[this.size] = new Barang(namaBarang, 1);
            this.size++;
        }
    }

    public void belanja(int lorong, int qty, String keterangan) {
        String namaBarang = keterangan + " (lorong " + lorong + ")";
        if (this.size < this.capacity) {
            this.listBelanja[this.size] = new Barang(namaBarang, qty);
            this.size++;
        }
    }

    public void belanja(String barang) {
        if (this.size < this.capacity) {
            this.listBelanja[this.size] = new Barang(barang, 1);
            this.size++;
        }
    }

    public void belanja(String barang, int qty) {
        if (this.size < this.capacity) {
            this.listBelanja[this.size] = new Barang(barang, qty);
            this.size++;
        }
    }

    public void print() {
        for (int i = 0; i < this.size; i++) {
            System.out.printf("%d. %s\n", i + 1, listBelanja[i].toString());
        }
    }
}