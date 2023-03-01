from sivitasakademik import SivitasAkademik
from Courses import Courses


class mahasiswa(SivitasAkademik):

    courses = []
    # constructor mahasiwa

    def __init__(self, nik, name, jenis_kelamin, asal_univ, email, nim, course=Courses):
        # pemanggilan variabel di kelas parent
        super().__init__(nik, name, jenis_kelamin, asal_univ, email)
        self.nim = nim
        self.courses.append(course)

    # disini untuk menambahkan course dimana ini adalah array of object
    def add_course(self, course=Courses):
        self.courses.append(course)
    # getter/setter methods untuk class  mahasiswa

    def get_nim(self):
        return self.nim

    def get_courses(self):
        return self.courses
