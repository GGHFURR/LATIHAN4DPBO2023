#include <iostream>
#include <vector>
#include "header.hh"

using namespace std;

// Constructor
Dosen::Dosen(string nik, string name, string jenis_kelamin, string asal_univ, string email, string nip, string pend_terakhir, string keahlian, Courses course)
    : SivitasAkademik(nik, name, jenis_kelamin, asal_univ, email)
{
    this->nip = nip;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
    this->courses.push_back(course);
}

// Method untuk menambahkan course
void Dosen::add_course(Courses course)
{
    courses.push_back(course);
}

// Getter methods
string Dosen::get_nip()
{
    return nip;
}

string Dosen::get_pend_terakhir()
{
    return pend_terakhir;
}

string Dosen::get_keahlian()
{
    return keahlian;
}

vector<Courses> Dosen::get_courses()
{
    return courses;
}
