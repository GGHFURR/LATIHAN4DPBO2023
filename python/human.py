class Human:
    def __init__(self, nik, name, jenis_kelamin):  # constructed human
        self.nik = nik
        self.name = name
        self.jenis_kelamin = jenis_kelamin

    # getter/setter methods untuk class human
    def get_nik(self):
        return self.nik

    def get_name(self):
        return self.name

    def get_jenis_kelamin(self):
        return self.jenis_kelamin
