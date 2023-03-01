from sivitasakademik import SivitasAkademik
from Courses import Courses


class Dosen(SivitasAkademik):
    # constructor temp atau mahasiwa
    courses = []

    def __init__(self, nik, name, jenis_kelamin, asal_univ, email, nip, pend_terakhir, keahlian, course=Courses):
        # pemanggilan variabel di kelas parent
        super().__init__(nik, name, jenis_kelamin, asal_univ, email)
        self.nip = nip
        self.pend_terakhir = pend_terakhir
        self.keahlian = keahlian
        self.courses.append(course)

    # disini untuk menambahkan course dimana ini adalah array of object

    def add_course(self, course=Courses):
        self.courses.append(course)

    # getter/setter methods untuk class temp atau mahasiswa
    def get_nip(self):
        return self.nip

    def get_pend_terakhir(self):
        return self.pend_terakhir

    def get_keahlian(self):
        return self.keahlian

    def get_courses(self):
        return self.courses
