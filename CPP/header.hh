#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Prodi
{
private:
    string nama_prodi;
    string kode;
    string fakultas;

public:
    // Constructor
    Prodi();
    Prodi(string nama_prodi, string kode, string fakultas);

    // Getter methods
    string get_nama_prodi();
    string get_kode();
    string get_fakultas();
};

class Human
{
private:
    string nik;
    string name;
    string jenis_kelamin;

public:
    // constructor for Human class
    Human(string nik, string name, string jenis_kelamin);

    // getter methods for Human class
    string get_nik();
    string get_name();
    string get_jenis_kelamin();
};

class SivitasAkademik : public Human
{
private:
    string asal_univ;
    string email;

public:
    // constructor for SivitasAkademik class
    SivitasAkademik(string nik, string name, string jenis_kelamin, string asal_univ, string email);

    // getter methods for SivitasAkademik class
    string get_asal_univ();
    string get_email();
};

class Courses
{
private:
    string nama_mk;
    Prodi prodi;

public:
    // constructor courses
    Courses(string nama_mk, Prodi prodi);

    // getter/setter methods untuk class courses
    string get_nama_mk();
    Prodi get_prodi();
};
class Mahasiswa : public SivitasAkademik
{
private:
    string nim;
    vector<Courses> courses;

public:
    // constructor for Mahasiswa class
    Mahasiswa(string nik, string name, string jenis_kelamin, string asal_univ, string email, string nim, Courses course);

    // method to add a course to the Mahasiswa's courses vector
    void add_course(Courses course);

    // getter methods for Mahasiswa class
    string get_nim();
    vector<Courses> get_courses();
};
class Dosen : public SivitasAkademik
{
private:
    vector<Courses> courses;
    string nip;
    string pend_terakhir;
    string keahlian;

public:
    // Constructor
    Dosen(string nik, string name, string jenis_kelamin, string asal_univ, string email, string nip, string pend_terakhir, string keahlian, Courses course);

    // Method untuk menambahkan course
    void add_course(Courses course);

    // Getter methods
    string get_nip();
    string get_pend_terakhir();
    string get_keahlian();
    vector<Courses> get_courses();
};
