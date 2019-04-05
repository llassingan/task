#SKEMA UMUM GREEDY ALGORITHM UNTUK PERMASALAHAN SHORTEST PATH

1.	Himpunan Kandidat : Rute {s,a,b,c,d,e,f,g}
2.	Himpunan Solusi : Semua solusi yang mungkin dibentuk dari kombinasi rute yang ada (belum memperhatikan aturan)
3.	Fungsi Seleksi : Mencari kandidat dari himpunan solusi untuk menyeleksi solusi yang tidak unik (dalam hal ini melewati kembali titik yang sudah dilewati dalam rute ex : {s,b,e,f,e,g}).
4.	Fungsi Kelayakan : Menyeleksi solusi yang menyalahi aturan (missal kembali melewati rute yang menyebabkan pergerakannnya menjadi berbalik, atau melompat ke titik tertentu, ex : {s,c,d,g}), sehingga menyisakan solusi yang benar, tetapi belum optimum.
5.	Fungsi Obyektif : Memilih rute dengan nilai terbaik (optimum), ex : {s,a,b,e,g}.

#SKEMA UMUM GREEDY ALGORITHM UNTUK PERMASALAHAN JOB SCHEDULE

1.	Himpunan Kandidat : Pekerjaan {1,2,3,4 }
2.	Himpunan Solusi : Semua solusi yang mungkin dibentuk dari kombinasi pekerjaan yg ada (belum memperhatikan aturan)
3.	Fungsi Seleksi : Mencari kandidat dari himpunan solusi untuk menyeleksi solusi yang tidak unik (dalam hal ini mengambil 2 pekerjaan yang sama ex : {2,2}).
4.	Fungsi Kelayakan : Menyeleksi solusi yang menyalahi aturan (missal melebihi waktu yang disediakan ex : {1,3}), sehingga menyisakan solusi yang benar, tetapi belum optimum.
5.	Fungsi Obyektif : Memilih rute dengan nilai terbaik (optimum), ex : {4,1}.

