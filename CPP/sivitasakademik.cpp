#include "header.hh"

// constructor for SivitasAkademik class
SivitasAkademik::SivitasAkademik(string nik, string name, string jenis_kelamin, string asal_univ, string email)
    : Human(nik, name, jenis_kelamin)
{
    this->asal_univ = asal_univ;
    this->email = email;
}

// getter methods for SivitasAkademik class
string SivitasAkademik::get_asal_univ()
{
    return this->asal_univ;
}

string SivitasAkademik::get_email()
{
    return this->email;
}