from Courses import Courses
from dosen import Dosen
from human import Human
from mahasiswa import mahasiswa
from prodi import prodi
from sivitasakademik import SivitasAkademik

# deklar variabel list
listDosen = []
# masukkan class prodi dan course
Tempprodi = prodi("ILMU KOMPUTER", "ML87", "FPMIPA")
tempcourse = Courses("Struktur Data", Tempprodi)

# masukkan class dosen
listDosen.append(Dosen("12121021", "Nadhief", "Laki", "ITB",
                 "jagungfresh@upi.edu", "112233", "SD", "Kerja Kelompok", tempcourse))

# Cetak data dosen
print("INI DATA DOSEN\n")
for obj in listDosen:
    print(obj.get_nik(), "||", obj.get_name(), "||", obj.get_jenis_kelamin(), "||", obj.get_asal_univ(
    ), "||", obj.get_email(), "||", obj.get_nip(), "||", obj.get_pend_terakhir(), "||", obj.get_keahlian(), "||")
    for course in obj.get_courses():
        print(course.get_nama_mk(), "||", course.get_prodi().get_nama_prodi(), "||",
              course.get_prodi().get_kode(), "||", course.get_prodi().get_fakultas())

print()

# deklar variabel list

listmahasiswa = []
# memasukkan data tempcourse sebelum nya karna capek aja bang
Temp = mahasiswa("1221222", "Nugi Aswitra", "Laki Setengah",
                 "Unibba", "Propeleyer@edu", "112288", tempcourse)

# masukkan class prodi dan course baru karna pengen pake array di mahasiswa
Tempprodi = prodi("Valorant", "VL87", "E-seport")
tempcourse = Courses("Menembak dengan benar", Tempprodi)
Temp.add_course(tempcourse)

# masukkan class mahasiswa
listmahasiswa.append(Temp)

# Cetak data Mahasiswa
print("INI DATA MAHASISWA\n")
for obj in listmahasiswa:
    print(obj.get_nik(), "||", obj.get_name(), "||", obj.get_jenis_kelamin(), "||", obj.get_asal_univ(
    ), "||", obj.get_email(), "||", obj.get_nim(), "||")
    for course in obj.get_courses():
        print(course.get_nama_mk(), "||", course.get_prodi().get_nama_prodi(), "||",
              course.get_prodi().get_kode(), "||", course.get_prodi().get_fakultas())

print()
