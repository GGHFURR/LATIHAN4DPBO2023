#include <iostream>
#include <string>
#include "header.hh"
using namespace std;

// constructor for Human class
Human::Human(string nik, string name, string jenis_kelamin)
{
    this->nik = nik;
    this->name = name;
    this->jenis_kelamin = jenis_kelamin;
}

// getter methods for Human class
string Human::get_nik()
{
    return this->nik;
}

string Human::get_name()
{
    return this->name;
}

string Human::get_jenis_kelamin()
{
    return this->jenis_kelamin;
}
