#include "header.hh"

int main()
{
    // deklar variabel list
    //  listDosen = []
    vector<Dosen> ListDosen;
    // masukkan class prodi dan course
    Prodi Tempprodi = Prodi("ILMU KOMPUTER", "ML87", "FPMIPA");
    Courses tempcourse = Courses("Struktur Data", Tempprodi);

    // masukkan class dosen
    ListDosen.push_back(Dosen("12121021", "Nadhief", "Laki", "ITB",
                              "jagungfresh@upi.edu", "112233", "SD", "Kerja Kelompok", tempcourse));

    // Cetak data dosen
    cout << endl;
    cout << "INI DATA DOSEN";
    cout << endl
         << endl;
    for (Dosen obj : ListDosen)
    {
        cout << obj.get_nik()
             << " || " << obj.get_name()
             << " || " << obj.get_jenis_kelamin()
             << " || " << obj.get_asal_univ()
             << " || " << obj.get_email()
             << " || " << obj.get_nip()
             << " || " << obj.get_pend_terakhir()
             << " || " << obj.get_keahlian() << " || ";
        for (Courses data : obj.get_courses())
        {
            cout << data.get_nama_mk()
                 << " || " << data.get_prodi().get_nama_prodi()
                 << " || " << data.get_prodi().get_kode()
                 << " || " << data.get_prodi().get_fakultas();
        }
    }
    cout << endl;

    // deklar variabel list

    vector<Mahasiswa> listmahasiswa;
    // memasukkan data tempcourse sebelum nya karna capek aja bang
    Mahasiswa Temp = Mahasiswa("1221222", "Nugi Aswitra", "Laki Setengah",
                               "Unibba", "Propeleyer@edu", "112288", tempcourse);

    // masukkan class prodi dan course baru karna pengen pake array di mahasiswa
    Tempprodi = Prodi("Valorant", "VL87", "E-seport");
    tempcourse = Courses("Menembak dengan benar", Tempprodi);
    Temp.add_course(tempcourse);

    // masukkan class mahasiswa
    listmahasiswa.push_back(Temp);

    // Cetak data Mahasiswa
    cout << endl;
    cout << "INI DATA MAHASISWA\n";
    cout << endl;
    for (Mahasiswa obj : listmahasiswa)
    {
        cout << obj.get_nik()
             << " || " << obj.get_name()
             << " || " << obj.get_jenis_kelamin()
             << " || " << obj.get_asal_univ()
             << " || " << obj.get_email()
             << " || " << obj.get_nim() << " || ";
        for (Courses data : obj.get_courses())
        {
            cout << data.get_nama_mk()
                 << " || " << data.get_prodi().get_nama_prodi()
                 << " || " << data.get_prodi().get_kode()
                 << " || " << data.get_prodi().get_fakultas();
        }
    }
}
