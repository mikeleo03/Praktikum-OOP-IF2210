// Implementasi beragam kelas dan template

public class TempatTinggal {
    // private
    protected int luas;
    protected double hargaBahanBangunan;

    // public
    public double hitungBiayaBangun() {
        return this.luas * this.hargaBahanBangunan;
    }

    public int getLuas() {
        return this.luas;
    }

    public double getHargaBahanBangunan() {
        return this.hargaBahanBangunan;
    }

    public void setLuas(int luas) {
        this.luas = luas;
    }
    
    public void setHargaBahanBangunan(double hargaBahanBangunan) {
        this.hargaBahanBangunan = hargaBahanBangunan;
    }
}

class Rumah extends TempatTinggal {
    // public
    public Rumah(int luas, double hargaBahanBangunan) {
        this.luas = luas;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public Rumah(int lebar, int panjang, double hargaBahanBangunan) {
        this.luas = lebar * panjang;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public double hitungBiayaBangun() {
        return this.luas * this.hargaBahanBangunan;
    }

    public double hitungBiayaBangun(double biayaOrmas) {
        return (this.luas * this.hargaBahanBangunan) + biayaOrmas;
    }

    public void setLuas(int luas) {
        this.luas = luas;
    }

    public void setLuas(int panjang, int lebar) {
        this.luas = panjang * lebar;
    }
}

interface Kendaraan {
    public float hitungJarakTempuh();
}

class Karavan extends TempatTinggal implements Kendaraan {
    // private
    protected float bensin;
    protected float pemakaianBensin;

    // public
    public float getBensin() {
        return this.bensin;
    }

    public float getPemakaianBensin() {
        return this.pemakaianBensin;
    }

    public void setBensin(float bensin) {
        this.bensin = bensin;
    }

    public void setPemakaianBensin(float pemakaianBensin) {
        this.pemakaianBensin = pemakaianBensin;
    }

    public double hitungBiayaBangun() {
        return this.luas * this.hargaBahanBangunan * 3;
    }

    public float hitungJarakTempuh() {
        return this.bensin * this.pemakaianBensin;
    }
}