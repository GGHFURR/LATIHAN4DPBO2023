#include "header.hh"
#include <vector>

// constructor for Mahasiswa class
Mahasiswa::Mahasiswa(string nik, string name, string jenis_kelamin, string asal_univ, string email, string nim, Courses course)
    : SivitasAkademik(nik, name, jenis_kelamin, asal_univ, email)
{
    this->nim = nim;
    this->courses.push_back(course);
}

// method to add a course to the Mahasiswa's courses vector
void Mahasiswa::add_course(Courses course)
{
    this->courses.push_back(course);
}

// getter methods for Mahasiswa class
string Mahasiswa::get_nim()
{
    return this->nim;
}

vector<Courses> Mahasiswa::get_courses()
{
    return this->courses;
}