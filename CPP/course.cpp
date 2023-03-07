#include "header.hh"

// constructor courses
Courses::Courses(string nama_mk, Prodi prodi)
{
    this->nama_mk = nama_mk;
    this->prodi = prodi;
}

// getter/setter methods untuk class courses
string Courses::get_nama_mk()
{
    return this->nama_mk;
}

Prodi Courses::get_prodi()
{
    return this->prodi;
}
