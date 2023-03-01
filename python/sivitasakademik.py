from human import Human


class SivitasAkademik(Human):
    # constructor sivitasAkademik
    def __init__(self, nik, name, jenis_kelamin, asal_univ, email):
        # pemanggilan variabel kelas parent
        super().__init__(nik, name, jenis_kelamin)
        self.asal_univ = asal_univ
        self.email = email

    # getter/setter methods untuk class Sivitas akademik
    def get_asal_univ(self):
        return self.asal_univ

    def get_email(self):
        return self.email
