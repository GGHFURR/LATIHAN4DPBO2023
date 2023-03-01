from prodi import prodi


class Courses:
    # constructor courses
    def __init__(self, nama_mk="", prodi=prodi):
        self.nama_mk = nama_mk
        self.prodi = prodi

    # getter/setter methods untuk class courses
    def get_nama_mk(self):
        return self.nama_mk

    def get_prodi(self):
        return self.prodi
