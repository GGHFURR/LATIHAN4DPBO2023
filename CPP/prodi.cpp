#include <iostream>
#include <string>
#include "header.hh"
using namespace std;

Prodi::Prodi()
{
    this->nama_prodi = "";
    this->kode = "";
    this->fakultas = "";
}
Prodi::Prodi(string nama_prodi, string kode, string fakultas)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->fakultas = fakultas;
}

// Getter methods
string Prodi::get_nama_prodi()
{
    return nama_prodi;
}

string Prodi::get_kode()
{
    return kode;
}

string Prodi::get_fakultas()
{
    return fakultas;
}