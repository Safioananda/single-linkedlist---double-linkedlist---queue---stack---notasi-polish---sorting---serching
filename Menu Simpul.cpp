#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <cstring>
#include <cstdlib>

using namespace std;

//deklarasi sub-program
//{
int input_posisi();
int input_isi();
int menu();
int menu_2();
int menu_3();
int menu_SD();
int menu_5();
int menu_6();
int menu_7();
int menu_8();
int menu_9();
int menu_10();
int menu_11();
int menu_11b();
int menu_pengambilan();
int menu_12();
//}
//single
//{
void t_depan();
void t_tengah();
void t_belakang();
void h_depan();
void h_tengah();
void h_belakang();
void cetak();
void cari();
void hapus_all();
//}
//double
//{
void t_depan2();
void t_tengah2();
void t_belakang2();
void h_depan2();
void h_tengah2();
void h_belakang2();
void cetak2();
void cari2();
void hapus_all_2();
//}
//Stack
//{
void Spop();
void Spush();
void Scetak();
//}
//QUEUE
//{
void ENQUEUE();
void DEQUEUE();
void Qcetak();
//}
//NOTASI POLISH
//{
void posfix();
void prefix();
//}
//SORTING
//{
void selection();
void insertion();
void bubble();
//}
//SEARCH
//{
void binary();
void sequential();
//}
void setcolor(unsigned short color);


//deklarasi struktur
//{
struct simpul
{
    int isi;
    simpul*next;
};
simpul*X;

struct simpul_2
{
    int isi_2;
    simpul_2 *kiri, *kanan;
};




//}
//deklarasi variable
//{
//variable sementara
string sementara;
//perulangan for
int i, iq, ulangi;
string ulang;
//SL
simpul *baru, *head , *tail, *bantu, *bantu_hapus, *hapus;
int data, posisi;
//DL
simpul_2 *baru_2, *head_2 , *tail_2, *bantu_2, *bantu_hapus_2, *hapus_2;
int data_2, posisi_2;
//S
int stack[100];
int top = 0, bottom = 0, maksS = 99, Shapus, ns, posisi_S, ujiS;
//Q
int queue[100];
int front = 0, rear = 0, maksQ = 99, Qhapus, nq, posisi_Q, ujiQ;
//NP
string soal;
int akhir, stop;

char queuenp[100], Qhapusnp;
int rearnp, frontnp;

char stacknp[100], Shapusnp;
int topnp, bottomnp;

char stacknp_baru[100], Shapusnp_baru;
int topnp_baru, bottomnp_baru;
//SORTING
int n, datas[100], js, kunci_kecil, data_sementara;
//SEARCH
int caris,L, R, ketemu = 0, tengah, posisis;
//}








//program utama

main()
{
    int b,c,d,e,f,g,h,ii,j,k,l,l_a,m;
    do
    {
        e = menu_SD();
        cout<<endl;
        if (e == 1)
        {
            do
            {
                c = menu_2();
                cout<<endl;
                if (c ==1)
                {
                    do
                    {
                        b = menu();
                        cout<<endl;
                        if(b == 1)
                            t_depan();
                        else if(b == 2)
                                t_tengah();
                            else if(b == 3)
                                    t_belakang();
                                    else
                                        {
                                            setcolor(12);
                                            cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                            setcolor(7);
                                            cout<<endl<<endl;
                                        }
                    }
                    while (b < 0 && b > 4);
                        main();
                }
                else if (c == 2)
                {
                    do
                    {
                        d = menu_3();
                        cout<<endl;
                        if(d == 1)
                            h_depan();
                        else if(d == 2)
                                h_tengah();
                            else if(d == 3)
                                    h_belakang();
                                    else
                                        {
                                            setcolor(12);
                                            cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                            setcolor(7);
                                            cout<<endl<<endl;
                                        }
                    }
                    while (d < 0 && d > 4);
                        main();
                }
                    else if (c ==3)
                        cetak();
                        else
                        {
                            setcolor(12);
                            cout<<" Error 404 | Silahkan masukkan code kembali! ";
                            setcolor(7);
                            cout<<endl<<endl;
                        }
            }
                while (c < 0 && c > 4);
                    main();
        }
        else if (e == 2)
            {
                do
                {
                    f = menu_5();
                    cout<<endl;
                    if(f == 1)
                    {
                        do
                        {
                            g = menu_6();
                            cout<<endl;
                            if(g == 1)
                                t_depan2();
                            else if(g == 2)
                                    t_tengah2();
                                else if(g == 3)
                                        t_belakang2();
                                        else
                                        {
                                            setcolor(12);
                                            cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                            setcolor(7);
                                            cout<<endl<<endl;
                                        }
                        }
                        while (g < 0 && g > 4);
                            main();
                    }

                else if(f == 2)
                {
                    do
                        {
                            h = menu_7();
                            cout<<endl;
                            if(h == 1)
                                h_depan2();
                            else if(h == 2)
                                    h_tengah2();
                                else if(h == 3)
                                        h_belakang2();
                                        else
                                        {
                                            setcolor(12);
                                            cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                            setcolor(7);
                                            cout<<endl<<endl;
                                        }
                        }
                        while (h < 0 && h > 4);
                        main();
                }
                else if(f == 3)
                    cetak2();
                    else
                        {
                            setcolor(12);
                            cout<<" Error 404 | Silahkan masukkan code kembali! ";
                            setcolor(7);
                            cout<<endl<<endl;
                        }
            }
            while (f < 0 && f > 4);
                    main();
            }
            else if (e == 3)
            {
                do
                {
                    ii = menu_8();
                    cout<<endl;
                    if (ii == 1)
                        Spush();
                        else if (ii == 2)
                            Spop();
                        else if (ii == 3)
                            Scetak();
                        else
                            {
                                setcolor(12);
                                cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                setcolor(7);
                                cout<<endl<<endl;
                            }

                }
                while (ii < 0 && ii > 4);
                main();
            }
            else if (e == 4)
            {
                do
                {
                    j = menu_9();
                    cout<<endl;
                    if (j == 1)
                        ENQUEUE();
                        else if (j == 2)
                            DEQUEUE();
                        else if (j == 3)
                            Qcetak();
                        else
                            {
                                setcolor(12);
                                cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                setcolor(7);
                                cout<<endl<<endl;
                            }
                }
                while (j < 0 && j > 4);
                main();
            }
            else if (e == 5)
            {
                do
                {
                    k = menu_10();
                    cout<<endl;
                    if (k == 1)
                        posfix();
                        else if (k == 2)
                            prefix();
                    else
                    {
                        setcolor(12);
                        cout<<" Error 404 | Silahkan masukkan code kembali! ";
                        setcolor(7);
                        cout<<endl<<endl;
                    }
                }
                while(k < 0 && k > 3);
                main();
            }
            else if (e == 6)
            {
                do
                {
                    l = menu_11();
                    cout<<endl;
                    if (l == 1)
                        selection();
                        else if (l == 2)
                            insertion();
                            else if (l == 3)
                                bubble();
                    else
                    {
                        setcolor(12);
                        cout<<" Error 404 | Silahkan masukkan code kembali! ";
                        setcolor(7);
                        cout<<endl<<endl;
                    }
                }
                while(l < 0 && l > 4);
                main();

            }
            else if (e == 7)
            {
                do
                {
                    m = menu_12();
                    cout<<endl;
                    if (m == 1)
                        sequential();
                        else if (m == 2)
                            binary();
                    else
                    {
                        setcolor(12);
                        cout<<" Error 404 | Silahkan masukkan code kembali! ";
                        setcolor(7);
                        cout<<endl<<endl;
                    }
                }
                while(l < 0 && l > 4);
                main();

            }
            else if (e == 8)
            {
                cout<<" Code rahasia menghapus semua simpul di program!\n";
                hapus_all();
                hapus_all_2();
            }
                else
                {
                    setcolor(12);
                                cout<<" Error 404 | Silahkan masukkan code kembali! ";
                                setcolor(7);
                                cout<<endl<<endl;
                }
    }
            while (e < 0 && e > 8);
            main();


}










//sub-Program

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
}

input_isi()
{
    int a;
    cout<<" Masukkan isi simpul = ";
    getline(cin, sementara);
    a = atoi(sementara.c_str());
    return a;
}

void t_depan()
{
    setcolor(14);
    cout<<" --- Tambah simpul depan --- "<<endl<<endl;
    setcolor(7);
    data = input_isi();

    baru = new simpul;
    baru -> isi = data;
    baru -> next = NULL;
    if (head == NULL)
        tail = baru;
    else
        baru -> next = head;
    head = baru;

    cout<<endl;
    setcolor(10);
    cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
    setcolor(7);

}

void t_belakang()
{
    setcolor(14);
    cout<<" --- Tambah simpul belakang --- "<<endl<<endl;
    setcolor(7);
    data = input_isi();

    baru = new simpul;
    baru -> isi = data;
    baru -> next = NULL;
    if (head == NULL)
        head = baru;
    else
        tail -> next = baru;
    tail = baru;

    cout<<endl;
    setcolor(10);
    cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
    setcolor(7);
}

void t_tengah()
{
    setcolor(14);
    cout<<" --- Tambah simpul tengah --- "<<endl<<endl;
    setcolor(7);
    if (head == NULL)
    {
        setcolor(12);
        cout<<"Error 403 | Linked list tidak boleh kosong! "<<endl<<endl;
        setcolor(7);
    }
    else
    {
        data = input_isi();

        baru = new simpul;
        baru -> isi = data;
        baru -> next = NULL;
        posisi = input_posisi();


        if (tail -> isi == posisi)
            {
                tail -> next = baru;
                tail = baru;

                cout<<endl;
                setcolor(10);
                cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
                setcolor(7);
            }
            else
            {
                bantu = head;
                while ((bantu -> isi != posisi) && (bantu != tail))
                    bantu = bantu -> next;
                if (bantu -> isi == posisi)
                {
                    baru -> next = bantu -> next;
                    bantu -> next = baru;
                    cout<<endl;
                    setcolor(10);
                    cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
                    setcolor(7);
                }
                else
                {
                    cout<<endl;
                    setcolor(12);
                    cout<<" !! POSISI TIDAK DITEMUKAN !! ";
                    setcolor(7);
                    cout<<endl<<endl;
                }
            }
    }

}

void h_depan()
{
    setcolor(14);
    cout<<" --- Hapus simpul depan --- "<<endl<<endl;
    setcolor(7);
    if(head ==NULL)
    {
        setcolor(12);
        cout<<" Linked list kosong! ";
        setcolor(7);
        cout<<endl<<endl;
    }
    else if (head == tail)
    {
        head = NULL;
        tail = NULL;
        setcolor(10);
        cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
        setcolor(7);
    }
        else
        {
            hapus = head;
            head = head -> next;
            hapus = NULL;
            setcolor(10);
            cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
            setcolor(7);
        }
}

void h_belakang()
{
    setcolor(14);
    cout<<" --- Hapus simpul belakang --- "<<endl<<endl;
    setcolor(7);

    if(head ==NULL)
        {
            setcolor(12);
            cout<<" Linked list kosong! ";
            setcolor(7);
            cout<<endl<<endl;
        }
    else if (head == tail)
    {
        head = NULL;
        tail = NULL;
        setcolor(10);
        cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
        setcolor(7);
    }
        else
        {
            bantu = head;
            while (bantu -> next -> next != NULL)
                bantu = bantu -> next;
            tail = bantu;
            bantu -> next = NULL;
            setcolor(10);
            cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
            setcolor(7);
        }
}

void h_tengah()
{
    int posisi_hapus;
    setcolor(14);
    cout<<" --- Hapus simpul tengah --- "<<endl<<endl;
    setcolor(7);

    posisi_hapus = input_posisi();
    cout<<endl;

    if (head == NULL)
    {
        setcolor(12);
        cout<<" Linked list kosong! ";
        setcolor(7);
        cout<<endl<<endl;
    }
    else
    {
        bantu = head;
        bantu_hapus = bantu -> next;
        while ((bantu -> isi != posisi_hapus) && (bantu -> next != NULL))
            {
                bantu = bantu -> next;
                bantu_hapus = bantu -> next;
            }
        if((bantu -> isi == posisi_hapus) && (bantu -> next != tail) && (bantu_hapus != NULL))
        {
            bantu -> next = bantu_hapus -> next;
            bantu_hapus = NULL;
            setcolor(10);
            cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
            setcolor(7);
        }
        else if (bantu -> next == tail)
            h_belakang();
                else
                {
                    setcolor(12);
                    cout<<" Simpul tidak ketemu! ";
                    setcolor(7);
                    cout<<endl<<endl;
                }
    }


}

menu()
{
    int pil;
    setcolor(14);
    cout<<" ------ Menu Program Tambah ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Tambah simpul depan "<<endl;
    cout<<" 2. Tambah simpul tengah "<<endl;
    cout<<" 3. Tambah simpul belakang "<<endl<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil = atoi(sementara.c_str());
    return pil;
}

menu_2()
{
    int pil_2;
    setcolor(14);
    cout<<" ------ Menu Program Single Linked List ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Tambah simpul "<<endl;
    cout<<" 2. Menghapus simpul "<<endl;
    cout<<" 3. Mencetak simpul "<<endl<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_2 = atoi(sementara.c_str());
    return pil_2;
}

menu_3()
{
    int pil_3;
    setcolor(14);
    cout<<" ------ Menu Program Hapus ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Hapus simpul depan "<<endl;
    cout<<" 2. Hapus simpul tengah "<<endl;
    cout<<" 3. Hapus simpul belakang "<<endl<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_3 = atoi(sementara.c_str());
    return pil_3;
}

menu_SD()
{
    int pil_4;
    setcolor(14);
    cout<<" ------ Menu Program ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Single Linked List "<<endl;
    cout<<" 2. Double Linked List "<<endl;
    cout<<" 3. STACK"<<endl;
    cout<<" 4. QUEUE"<<endl;
    cout<<" 5. NOTASI POLISH"<<endl;
    cout<<" 6. SORTING"<<endl;
    cout<<" 7. SEARCHING"<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_4 = atoi(sementara.c_str());
    return pil_4;
}

menu_5()
{
    int pil_5;
    setcolor(14);
    cout<<" ------ Menu Program Double Linked List ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Tambah simpul "<<endl;
    cout<<" 2. Hapus simpul "<<endl;
    cout<<" 3. Cetak simpul "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_5 = atoi(sementara.c_str());
    return pil_5;
}

menu_6()
{
    int pil_6;
    setcolor(14);
    cout<<" ------ Menu Program Tambah ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Tambah simpul depan "<<endl;
    cout<<" 2. Tambah simpul tengah "<<endl;
    cout<<" 3. Tambah simpul belakang "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_6 = atoi(sementara.c_str());
    return pil_6;

}

menu_7()
{
    int pil_7;
    setcolor(14);
    cout<<" ------ Menu Program Hapus ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. Hapus simpul depan "<<endl;
    cout<<" 2. Hapus simpul tengah "<<endl;
    cout<<" 3. Hapus simpul belakang "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_7 = atoi(sementara.c_str());
    return pil_7;
}

menu_8()
{
    int pil_8;
    setcolor(14);
    cout<<" ------ Menu STACK ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. STACK PUSH "<<endl;
    cout<<" 2. STACK POP "<<endl;
    cout<<" 3. Cetak isi STACK "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_8 = atoi(sementara.c_str());
    return pil_8;
}

menu_9()
{
    int pil_9;
    setcolor(14);
    cout<<" ------ Menu STACK ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. QUEUE ENQUEUE "<<endl;
    cout<<" 2. QUEUE DEQUEUE "<<endl;
    cout<<" 3. Cetak isi QUEUE "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_9 = atoi(sementara.c_str());
    return pil_9;
}

menu_10()
{
    int pil_10;
    setcolor(14);
    cout<<" ------ Menu NOTASI POLISH ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. INFIX -> POSTFIX "<<endl;
    cout<<" 2. INFIX -> PREFIX "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_10 = atoi(sementara.c_str());
    return pil_10;
}

menu_11()
{
    int pil_11;
    setcolor(14);
    cout<<" ------ Menu SORTING ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. SELECTION SORT "<<endl;
    cout<<" 2. INSERTION SORT "<<endl;
    cout<<" 3. BUBBLE SORT "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_11 = atoi(sementara.c_str());
    return pil_11;
}

menu_11b()
{
    int pil_11b;
    setcolor(14);
    cout<<" ------ Menu SORTING B ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. ASCENDING "<<endl;
    cout<<" 2. DESCENDING "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_11b = atoi(sementara.c_str());
    return pil_11b;
}

menu_12()
{
    int pil_12;
    setcolor(14);
    cout<<" ------ Menu SEARCH ------"<<endl<<endl;
    setcolor(7);
    cout<<" 1. SEQUENTIAL SEARCH "<<endl;
    cout<<" 2. BINARY SEARCH "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_12 = atoi(sementara.c_str());
    return pil_12;
}

menu_pengambilan()
{
    int pil_pengambilan;
    setcolor(14);
    cout<<" ------ Menu PENGAMBILAN DATA ------"<<endl<<endl;
    setcolor(7);
    cout<<" Pilih data yang ingin digunakan"<<endl;
    cout<<" 1. SINGLE LINKED LIST "<<endl;
    cout<<" 2. DOUBLE LINKED LIST "<<endl;
    cout<<" 3. QUEUE "<<endl;
    cout<<" 4. STACK "<<endl;
    cout<<" Masukkan kode pilihan = ";
    getline(cin, sementara);
    pil_pengambilan = atoi(sementara.c_str());
    return pil_pengambilan;
}

void cetak()
{
    setcolor(14);
    cout<<" ### Cetak isi linked list ### "<<endl<<endl;
    setcolor(7);
    bantu = head;
    if (bantu == NULL)
    {
        setcolor(12);
        cout<<" Linked list kosong! ";
        setcolor(7);
    }
    else
    {
        bantu = head;
        setcolor(11);
        cout<<" Isi linked list adalah = ";
        while (bantu -> next != NULL)
        {
            cout<<bantu -> isi<<" -> ";
            bantu =  bantu -> next;
        }
        cout<<bantu -> isi;
        cout<<endl;
        cout<<" head = "<<head -> isi<<endl;
        cout<<" tail = "<<tail -> isi<<endl;
    }

    setcolor(7);
    cout<<endl<<endl;
}

int input_posisi()
{
    int p;
    cout<<" Masukkan posisi simpul yang diinginkan = ";
    getline(cin, sementara);
    p = atoi(sementara.c_str());
    return p;
}

void hapus_all()
{
    if(head == NULL)
        cout<<"     \n";
    else
    {
    while(bantu -> next != NULL)
    {
        bantu = head;
        bantu -> next = head;
        bantu = NULL;
    }

    bantu = NULL;
    head = NULL;
    tail = NULL;
    }
}





//double

void t_depan2()
{
    setcolor(14);
    cout<<" --- Tambah simpul depan --- "<<endl<<endl;
    setcolor(7);
    data = input_isi();

    baru_2 = new simpul_2;
    baru_2-> isi_2 = data;
    baru_2-> kanan = NULL;
    baru_2-> kiri = NULL;
    if (head_2 == NULL)
        tail_2 = baru_2 ;
    else
        {
            baru_2 -> kanan = head_2;
            baru_2 -> kiri = NULL;
        }
    head_2 = baru_2;

    cout<<endl;
    setcolor(10);
    cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
    setcolor(7);

}

void t_tengah2()
{
    setcolor(14);
    cout<<" --- Tambah simpul tengah --- "<<endl<<endl;
    setcolor(7);
    if (head_2 == NULL)
    {
        setcolor(12);
        cout<<" Error 403 | Linked list tidak boleh kosong! "<<endl<<endl;
        setcolor(7);
    }
    else
    {
        data = input_isi();

        baru_2 = new simpul_2;
        baru_2 -> isi_2 = data;
        baru_2 -> kanan = NULL;
        baru_2 -> kiri = NULL;
        posisi_2 = input_posisi();


        if (tail_2 -> isi_2 == posisi_2)
            {
                tail_2 -> kanan = baru_2;
                baru_2 -> kiri = tail_2;
                tail_2 = baru_2;

                cout<<endl;
                setcolor(10);
                cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
                setcolor(7);
            }
            else
            {
                bantu_2 = head_2;
                while ((bantu_2 -> isi_2 != posisi_2) && (bantu_2 != tail_2))
                    bantu_2 = bantu_2 -> kanan;

                if (bantu_2 -> isi_2 == posisi_2)
                {
                    baru_2 -> kanan = bantu_2 -> kanan;
                    bantu_2 -> kanan = baru_2;
                    baru_2 -> kanan -> kiri = baru_2;
                    baru_2 -> kiri = bantu_2;
                    cout<<endl;
                    setcolor(10);
                    cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
                    setcolor(7);
                }
                else
                {
                    cout<<endl;
                    setcolor(12);
                    cout<<" !! POSISI TIDAK DITEMUKAN !! ";
                    setcolor(7);
                    cout<<endl<<endl;
                }
            }
    }

}

void t_belakang2()
{
    setcolor(14);
    cout<<" --- Tambah simpul belakang --- "<<endl<<endl;
    setcolor(7);
    data = input_isi();

    baru_2 = new simpul_2;
    baru_2 -> isi_2 = data;
    baru_2 -> kanan = NULL;
    baru_2 -> kiri = NULL;
    if (head_2 == NULL)
        head_2 = baru_2;
    else
    {
        tail_2 -> kanan = baru_2;
        baru_2 -> kiri = tail_2;
        baru_2 -> kanan = NULL;
    }
    tail_2 = baru_2;

    cout<<endl;
    setcolor(10);
    cout<<" *** Inputan anda berhasil *** "<<endl<<endl;
    setcolor(7);

}

void h_depan2()
{
    setcolor(14);
    cout<<" --- Hapus simpul depan --- "<<endl<<endl;
    setcolor(7);
    if(head_2 ==NULL)
    {
        setcolor(12);
        cout<<" Linked list kosong! ";
        setcolor(7);
        cout<<endl<<endl;
    }
    else if (head_2 == tail_2)
    {
        head_2 = NULL;
        tail_2 = NULL;
        setcolor(10);
        cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
        setcolor(7);
    }
        else
        {
            hapus_2 = head_2;
            head_2 = head_2 -> kanan;
            hapus_2 = NULL;
            setcolor(10);
            cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
            setcolor(7);
        }

}
void h_tengah2()
{
    int posisi_hapus;
    setcolor(14);
    cout<<" --- Hapus simpul tengah --- "<<endl<<endl;
    setcolor(7);

    posisi_hapus = input_posisi();
    cout<<endl;

    if (head_2 == NULL)
    {
        setcolor(12);
        cout<<" Linked list kosong! ";
        setcolor(7);
        cout<<endl<<endl;
    }
    else
    {
        bantu_2 = head_2;
        bantu_hapus_2 = bantu_2 -> kanan;
        while ((bantu_2 -> isi_2 != posisi_hapus) && (bantu_2 -> kanan != NULL))
            {
                bantu_2 = bantu_2 -> kanan;
                bantu_hapus_2 = bantu_2 -> kanan;
            }
        if((bantu_2 -> isi_2 == posisi_hapus) && (bantu_2 -> kanan != tail_2) && (bantu_hapus_2 != NULL))
        {
            bantu_2 -> kanan = bantu_hapus_2 -> kanan;
            bantu_hapus_2 -> kanan -> kiri = bantu_2;
            bantu_hapus_2 = NULL;
            setcolor(10);
            cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
            setcolor(7);
        }
        else if (bantu_2 -> kanan == tail_2)
            h_belakang2();
                else
                {
                    setcolor(12);
                    cout<<" Simpul tidak ketemu! ";
                    setcolor(7);
                    cout<<endl<<endl;
                }
    }
}

void h_belakang2()
{
    setcolor(14);
    cout<<" --- Hapus simpul belakang --- "<<endl<<endl;
    setcolor(7);

    if(head_2 == NULL)
        {
            setcolor(12);
            cout<<" Linked list kosong! ";
            setcolor(7);
            cout<<endl<<endl;
        }
    else if (head_2 == tail_2)
    {
        head_2 = NULL;
        tail_2 = NULL;
        setcolor(10);
        cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
        setcolor(7);
    }
        else
        {
            bantu_2 = head_2;
            while (bantu_2 -> kanan -> kanan != NULL)
                bantu_2 = bantu_2 -> kanan;
            tail_2 = bantu_2;
            bantu_2 -> kanan = NULL;
            setcolor(10);
            cout<<" *** Penghapusan simpul berhasil *** "<<endl<<endl;
            setcolor(7);
        }
}

void cetak2()
{
    setcolor(14);
    cout<<" ### Cetak isi linked list ### "<<endl<<endl;
    setcolor(7);
    bantu_2 = head_2;
    if (bantu_2 == NULL)
    {
        setcolor(12);
        cout<<" Linked list kosong! ";
        setcolor(7);
    }
    else
    {
        bantu_2 = head_2;
        setcolor(11);
        cout<<" Isi linked list adalah = ";
        while (bantu_2 -> kanan != NULL)
        {
            cout<<bantu_2 -> isi_2 <<" -> ";
            bantu_2 =  bantu_2 -> kanan;
        }
        cout<<bantu_2 -> isi_2;
        cout<<endl;
        cout<<" head = "<<head_2 -> isi_2<<endl;
        cout<<" tail = "<<tail_2 -> isi_2<<endl;
    }

    setcolor(7);
    cout<<endl<<endl;
}

void hapus_all_2()
{
    if(head == NULL)
        cout<<"     \n";

    else
    {
    while(bantu_2 -> kanan != NULL)
    {
        bantu_2 = head_2;
        bantu_2 -> kanan = head_2;
        bantu_2 = NULL;
    }

    bantu_2 = NULL;
    head_2 = NULL;
    tail_2 = NULL;
    }
}






//STACK
void Spush()
{
    do
    {
        if(top < maksS)
        {
            top++;
            cout<<" Masukkan nilai stack = ";
            getline(cin, sementara);
            stack[top] = atoi(sementara.c_str());
            if(top == 1)
            bottom++;
            cout<<endl;
            setcolor(10);
            cout<<" *** PUSH "<<stack[top]<<" berhasil *** "<<endl<<endl;
            setcolor(7);
        }
        else
        {
            setcolor(12);
            cout<<" ERROR 403-a S| Stack Penuh!\n\n";
            setcolor(7);
        }

        cout<<" Apakah anda ingin mengulang push ? y/t ";
        getline(cin, ulang);
        cout<<endl;
    }
    while((ulang != "t") && (ulang != "T"));
}

void Spop()
{
    do
    {
        cout<<" Masukkan data yang ingin di pop = ";
        getline(cin, sementara);
        ns = atoi(sementara.c_str());
        cout<<endl;

        ujiS = 0;
        while ((stack[ujiS] != ns) && (ujiS != 99) && (ujiS < top))
                ujiS++;

        posisi_S = ujiS;

        if ((stack[ujiS] != ns) && (top > 0))
        {
            setcolor(12);
            cout<<" ERROR 404 | Data tidak ditemukan! \n";
            setcolor(7);
        }
        else
        {
            for(i = top ; i >= posisi_S ; i--)
            {
                if (top > 0)
                {
                    Shapus = stack[top];
                    top--;
                    if (top == 0)
                        bottom--;
                    setcolor(10);
                    cout<<" Pop "<<Shapus<<" berhasil\n";
                    setcolor(7);
                }
                else
                {
                    setcolor(12);
                    cout<<" ERROR 403-b S| Stack Kosong!\n";
                    setcolor(7);
                }
            }
        }
        cout<<"\n Apakah anda ingin mengulang pop? y/t ";
        getline(cin, ulang);
        cout<<endl;
    }
    while((ulang != "t") && (ulang != "T"));
}

void Scetak()
{
    setcolor(11);
    if (top > 0)
    {
        cout<<" Isi stack = ";
        for (i = 1 ; i <= top ; i++)
            cout<<stack[i]<<", ";
        cout<<endl<<endl;
    }
    else
        cout<<" Isi stack = Kosong!\n\n";
    setcolor(7);
}





//QUEUE
void ENQUEUE()
{
    do
    {
        if (rear < maksQ)
        {
            rear++;
            cout<<" Masukkan nilai queue = ";
            getline(cin, sementara);
            queue[rear] = atoi(sementara.c_str());
            if (rear == 1)
            front++;
            cout<<endl;
            setcolor(10);
            cout<<" *** ENQUEUE "<<queue[rear]<<" berhasil *** "<<endl<<endl;
            setcolor(7);
        }
        else
        {
            setcolor(12);
            cout<<" ERROR 403-a Q| Queue Penuh!\n\n";
            setcolor(7);
        }

        cout<<" Apakah anda ingin mengulang ENQUEUE ? y/t ";
        getline(cin, ulang);
        cout<<endl;

    }
    while ((ulang != "t") && (ulang != "T"));
}

void DEQUEUE()
{
    do
    {
        cout<<" Masukkan data yang ingin di DEQUEUE = ";
        getline(cin, sementara);
        nq = atoi(sementara.c_str());
        cout<<endl;

        ujiQ = 0;
        while ((queue[ujiQ] != nq) && (ujiQ != 99) && (ujiQ < rear))
                ujiQ++;

        posisi_Q = ujiQ;

        if ((queue[ujiQ] != nq) && (rear > 0))
        {
            setcolor(12);
            cout<<" ERROR 404 | Data tidak ditemukan! \n";
            setcolor(7);
        }
        else
        {
            for(i = front ; i <= posisi_Q ; i++)
            {
                if (rear > 0)
                {
                    Qhapus = queue[front];
                    for( iq = 1; iq <= rear-1; iq++)
                        queue[iq]= queue[iq+1];

                    rear--;
                    if (rear == 0)
                        front--;
                    setcolor(10);
                    cout<<" DEQUEUE "<<Qhapus<<" berhasil\n";
                    setcolor(7);
                }
                else
                {
                    setcolor(12);
                    cout<<" ERROR 403-b Q| Queue Kosong!\n";
                    setcolor(7);
                }
            }
        }
        cout<<"\n Apakah anda ingin mengulang DEQUEUE? y/t ";
        getline(cin, ulang);
        cout<<endl;
    }
    while((ulang != "t") && (ulang != "T"));
}

void Qcetak()
{
    setcolor(11);
    if (rear > 0)
    {
        cout<<" Isi queue = ";
        for (i = 1 ; i <= rear ; i++)
            cout<<queue[i]<<", ";
        cout<<endl<<endl;;
    }
    else
        cout<<" Isi Qeueu = Kosong!\n\n";
    setcolor(7);
}






//NOTASI POLISH
void posfix()
{
    topnp = 0;
    bottomnp = 0;
    rearnp = 0;
    frontnp = 0;

    setcolor(14);
    cout<<" +++ PROGRAM NOTASI POLISH POSTFIX +++ \n\n";
    setcolor(7);
    cout<<" Masukkan soal = ";
    getline(cin, soal);

    akhir = soal.length();

    cout<<" jumlah char = "<<akhir;
    cout<<endl<<endl;

    for (i = 0 ; i <= akhir-1 ; i++)
    {
        if(soal[i] == '(')
        {
            topnp++;
            stacknp[topnp] = soal[i];
            if(topnp == 1)
            bottomnp++;
        }
        else if(soal [i] == ')')
        {
            while (stacknp[topnp] != '(')
            {
                //pop
                Shapusnp = stacknp[topnp];
                topnp--;
                if (topnp == 0)
                    bottomnp--;

                //enqueue
                rearnp++;
                queuenp[rearnp] = Shapusnp;
                if (rearnp == 1)
                    frontnp++;
            }

            topnp--;
        }
        else if(soal [i] == '^')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                while ((stacknp[topnp] != '(') && (stacknp[topnp] == '^'))
                {
                    //pop
                    Shapusnp = stacknp[topnp];
                    topnp--;
                    if (topnp == 0)
                        bottomnp--;

                    //enqueue
                    rearnp++;
                    queuenp[rearnp] = Shapusnp;
                    if (rearnp == 1)
                        frontnp++;
                }

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '*')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '*')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '/')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    //else if (stacknp[topnp] == '+')
                    //    stop = 1;
                    //else if (stacknp[topnp] == '-')
                    //    stop = 1;
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '/')
                {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '*')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '/')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    //else if (stacknp[topnp] == '+')
                    //    stop = 1;
                    //else if (stacknp[topnp] == '-')
                    //    stop = 1;
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '+')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '*')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '/')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '+')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '-')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '-')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '*')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '/')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '+')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '-')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else
        {
            rearnp++;
            queuenp[rearnp] = soal[i];
            if (rearnp == 1)
            frontnp++;
        }
    }

    //cetak
    cout<<" ______________________INFORMASI_________"<<endl<<endl;
    cout<<" char yang dibaca adalah : ";
    for (i = 0 ; i <= akhir-1 ; i++)
        cout<<soal[i]<<" ";
    cout<<endl;
    cout<<" stack adalah : ";
    for (i = 1 ; i <= topnp ; i++)
        cout<<stacknp[i]<<" ";
    cout<<endl;
    cout<<" queue adalah : ";
    for (i = 1; i <= rearnp; i++)
        cout<<queuenp[i]<<" ";
    cout<<endl;
    cout<<"________________________________________";


    //HASIL AKHIR
    while (topnp != 0)
    {
        //pop
        Shapusnp = stacknp[topnp];
        topnp--;
        if (topnp == 0)
            bottomnp--;

        //enqueue
        rearnp++;
        queuenp[rearnp] = Shapusnp;
        if (rearnp == 1)
            frontnp++;
    }

    cout<<endl<<endl;
    setcolor(10);
    cout<<" HASIL INFIX -> POSTFIX ADALAH : ";
    for (i = 1; i <= rearnp; i++)
        cout<<queuenp[i]<<" ";
    setcolor(7);
    cout<<endl<<endl<<endl<<endl;
}

void prefix()
{
    topnp = 0;
    bottomnp = 0;
    rearnp = 0;
    frontnp = 0;
    topnp_baru = 0;
    bottomnp_baru = 0;

    setcolor(14);
    cout<<" +++ PROGRAM NOTASI POLISH PREFIX+++ \n\n";
    setcolor(7);
    cout<<" Masukkan soal = ";
    getline(cin, soal);

    akhir = soal.length();

    cout<<" jumlah char = "<<akhir;
    cout<<endl<<endl;

    for (i = akhir-1 ; i >= 0 ; i--)
    {
        if(soal[i] == ')')
        {
            topnp++;
            stacknp[topnp] = soal[i];
            if(topnp == 1)
            bottomnp++;
        }
        else if(soal [i] == '(')
        {
            while (stacknp[topnp] != ')')
            {
                //pop
                Shapusnp = stacknp[topnp];
                topnp--;
                if (topnp == 0)
                    bottomnp--;

                //enqueue
                rearnp++;
                queuenp[rearnp] = Shapusnp;
                if (rearnp == 1)
                    frontnp++;
            }

            topnp--;
        }
        else if(soal [i] == '^')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '*')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    //else if (stacknp[topnp] == '+')
                    //    stop = 1;
                    //else if (stacknp[topnp] == '-')
                    //    stop = 1;
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '/')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    //else if (stacknp[topnp] == '+')
                    //    stop = 1;
                    //else if (stacknp[topnp] == '-')
                    //    stop = 1;
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '+')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '*')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '/')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else if(soal [i] == '-')
        {
            if (topnp == 0)
            {
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                bottomnp++;
            }
            else
            {
                do
                {
                    stop = 0;
                    if (stacknp[topnp] == '^')
                    {
                        //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '*')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else if (stacknp[topnp] == '/')
                    {
                         //pop
                        Shapusnp = stacknp[topnp];
                        topnp--;
                        if (topnp == 0)
                            bottomnp--;

                        //enqueue
                        rearnp++;
                        queuenp[rearnp] = Shapusnp;
                        if (rearnp == 1)
                            frontnp++;
                    }
                    else
                        stop = 1;
                }
                while (stop != 1);

                //push
                topnp++;
                stacknp[topnp] = soal[i];
                if(topnp == 1)
                    bottomnp++;
            }
        }
        else
        {
            rearnp++;
            queuenp[rearnp] = soal[i];
            if (rearnp == 1)
            frontnp++;
        }
    }

    //cetak
    cout<<"______________________INFORMASI_________"<<endl<<endl;
    cout<<" char yang dibaca adalah : ";
    for (i = akhir-1 ; i >= 0 ; i--)
        cout<<soal[i]<<" ";
    cout<<endl;
    cout<<" stack adalah : ";
    for (i = 1 ; i <= topnp ; i++)
        cout<<stacknp[i]<<" ";
    cout<<endl;
    cout<<" queue adalah : ";
    for (i = 1; i <= rearnp; i++)
        cout<<queuenp[i]<<" ";
    cout<<endl;

    while (topnp != 0)
    {
        //pop
        Shapusnp = stacknp[topnp];
        topnp--;
        if (topnp == 0)
            bottomnp--;

        //enqueue
        rearnp++;
        queuenp[rearnp] = Shapusnp;
        if (rearnp == 1)
            frontnp++;
    }

    cout<<" queue + pop adalah : ";
    for (i = 1; i <= rearnp; i++)
        cout<<queuenp[i]<<" ";
    cout<<endl;

    //dequeue & push
    while (rearnp !=0 )
    {
        //dequeue
        Qhapusnp = queuenp[frontnp];
        for( i= 1; i <= rearnp-1; i++)
            queuenp[i]= queuenp[i+1];
        rearnp--;
        if (rearnp == 0)
            frontnp--;

        //push
        topnp_baru++;
        stacknp_baru[topnp_baru] = Qhapusnp;
        if(topnp_baru == 1)
            bottomnp_baru++;
    }

    cout<<" stack baru adalah : ";
    for (i = 1; i <= topnp_baru; i++)
        cout<<stacknp_baru[i]<<" ";
    cout<<endl;
    cout<<"________________________________________";

    cout<<endl<<endl;
    setcolor(10);
    cout<<" HASIL INFIX -> PREFIX ADALAH : ";
    while (topnp_baru != 0)
    {
        Shapusnp_baru = stacknp_baru[topnp_baru];
        topnp_baru--;
        if (topnp_baru == 0)
            bottomnp_baru--;

        cout<<Shapusnp_baru<<" ";
    }
    setcolor(7);
    cout<<endl<<endl<<endl<<endl;
}

void selection()
{
    int asordes = menu_11b();
    cout<<endl;

    if(asordes == 1)
    {
        setcolor(14);
        cout<<" --- SORTING SELECTION ASCENDING --- "<<endl<<endl;
        setcolor(7);

        cout<<" Masukkan jumlah data = ";
        getline(cin, sementara);
        n = atoi(sementara.c_str());

        for (i=1 ; i <=n; i++)
        {
            cout<<" Masukkan data "<<i<<" : ";
            getline(cin, sementara);
            datas[i] = atoi(sementara.c_str());
        }
        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (i = 1; i <=(n-1); i++)
        {
            js = i+1;
            kunci_kecil = i;

            while (js <= n)
            {
                if (datas[kunci_kecil] > datas[js])
                {
                    kunci_kecil = js;
                }
                js++;
            }

            data_sementara = datas[kunci_kecil];
            datas[kunci_kecil] = datas[i];
            datas[i] = data_sementara;

        }

        for(i = 1; i <= n ;i++)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;
    }
    else if (asordes == 2)
    {
        setcolor(14);
        cout<<" --- SORTING SELECTION DESCENDING --- "<<endl<<endl;
        setcolor(7);

        cout<<" Masukkan jumlah data = ";
        getline(cin, sementara);
        n = atoi(sementara.c_str());

        for (i=1 ; i <=n; i++)
        {
            cout<<" Masukkan data "<<i<<" : ";
            getline(cin, sementara);
            datas[i] = atoi(sementara.c_str());
        }
        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (i = 1; i <=(n-1); i++)
        {
            js = i+1;
            kunci_kecil = i;

            while (js <= n)
            {
                if (datas[kunci_kecil] > datas[js])
                {
                    kunci_kecil = js;
                }
                js++;
            }

            data_sementara = datas[kunci_kecil];
            datas[kunci_kecil] = datas[i];
            datas[i] = data_sementara;

        }

        for(i = n; i >= 1 ;i--)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;
    }
    else
    {
        setcolor(12);
        cout<<" Error 404 | Silahkan masukkan code kembali! ";
            setcolor(7);
        cout<<endl<<endl;
    }
}

void insertion()
{
    int asordes = menu_11b();
    cout<<endl;

    if(asordes == 1)
    {
        setcolor(14);
        cout<<" --- SORTING INSERTION ASCENDING --- "<<endl<<endl;
        setcolor(7);

        cout<<" Masukkan jumlah data = ";
        getline(cin, sementara);
        n = atoi(sementara.c_str());

        for (i=1 ; i <=n; i++)
        {
            cout<<" Masukkan data "<<i<<" : ";
            getline(cin, sementara);
            datas[i] = atoi(sementara.c_str());
        }
        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (i = 2; i<= n; i++)
        {
            js = i-1;
            do
            {
                if (datas[i] < datas[js])
                {
                    data_sementara = datas[i];
                    datas[i] = datas[js];
                    datas[js] = data_sementara;
                    i = js;
                }
                js--;
            }
            while (js != 0);
        }

        for(i = 1; i <= n ;i++)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;
    }
    else if(asordes == 2)
    {
        setcolor(14);
        cout<<" --- SORTING INSERTION DESCENDING --- "<<endl<<endl;
        setcolor(7);

        cout<<" Masukkan jumlah data = ";
        getline(cin, sementara);
        n = atoi(sementara.c_str());

        for (i=1 ; i <=n; i++)
        {
            cout<<" Masukkan data "<<i<<" : ";
            getline(cin, sementara);
            datas[i] = atoi(sementara.c_str());
        }
        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (i = 2; i<= n; i++)
        {
            js = i-1;
            do
            {
                if (datas[i] < datas[js])
                {
                    data_sementara = datas[i];
                    datas[i] = datas[js];
                    datas[js] = data_sementara;
                    i = js;
                }
                js--;
            }
            while (js != 0);
        }

        for(i = n; i >= 1 ;i--)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;
    }
    else
    {
        setcolor(12);
        cout<<" Error 404 | Silahkan masukkan code kembali! ";
            setcolor(7);
        cout<<endl<<endl;
    }
}

void bubble()
{
    int asordes = menu_11b();
    cout<<endl;

    if(asordes == 1)
    {
        setcolor(14);
        cout<<" --- SORTING BUBBLE ASCENDING --- "<<endl<<endl;
        setcolor(7);

        cout<<" Masukkan jumlah data = ";
        getline(cin, sementara);
        n = atoi(sementara.c_str());

        for (i=1 ; i <=n; i++)
        {
            cout<<" Masukkan data "<<i<<" : ";
            getline(cin, sementara);
            datas[i] = atoi(sementara.c_str());
        }

        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (js = 1; js <=n-1; js++)
        {
            i = n;
            do
            {
                if (datas[i] < datas[i -1])
                {
                    data_sementara = datas[i-1];
                    datas[i-1] = datas[i];
                    datas[i] = data_sementara;
                }
                i--;
            }
            while(i > js);
        }

        for(i = 1; i <= n ;i++)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;
    }
    else if(asordes == 2)
    {
         setcolor(14);
        cout<<" --- SORTING BUBBLE DESCENDING --- "<<endl<<endl;
        setcolor(7);

        cout<<" Masukkan jumlah data = ";
        getline(cin, sementara);
        n = atoi(sementara.c_str());

        for (i=1 ; i <=n; i++)
        {
            cout<<" Masukkan data "<<i<<" : ";
            getline(cin, sementara);
            datas[i] = atoi(sementara.c_str());
        }

        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (js = 1; js <=n-1; js++)
        {
            i = n;
            do
            {
                if (datas[i] < datas[i -1])
                {
                    data_sementara = datas[i-1];
                    datas[i-1] = datas[i];
                    datas[i] = data_sementara;
                }
                i--;
            }
            while(i > js);
        }

        for(i = n; i >= 1 ;i--)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;
    }
    else
    {
        setcolor(12);
        cout<<" Error 404 | Silahkan masukkan code kembali! ";
        setcolor(7);
        cout<<endl<<endl;
    }

}

void sequential()
{
    setcolor(14);
    cout<<" --- SEARCH SEQUENTIAL --- "<<endl<<endl;
    setcolor(7);

    cout<<" Masukkan jumlah data = ";
    getline(cin, sementara);
    n = atoi(sementara.c_str());

    for (i=1 ; i <=n; i++)
    {
        cout<<" Masukkan data "<<i<<" : ";
        getline(cin, sementara);
        datas[i] = atoi(sementara.c_str());
    }


    cout<<endl;
    cout<<" Masukan data yang ingin dicari : ";
    getline(cin, sementara);
    caris = atoi(sementara.c_str());

    for (i = 1; i<=n ;i++)
    {
        if(datas[i] == caris)
        {
            ketemu = 1;
            posisis = i;
        }
    }
    cout<<endl;
    if(ketemu == 1)
    {
        setcolor(10);
        cout<<" Data telah ditemukan pada posisi "<<posisis<<endl<<endl;
        setcolor(7);
    }
    else
    {
        setcolor(12);
        cout<<" Data tidak ditemukan"<<endl<<endl;
        setcolor(7);
    }
}

void binary()
{
    setcolor(14);
    cout<<" --- SEARCH BINARY --- "<<endl<<endl;
    setcolor(7);

    cout<<" Masukkan jumlah data = ";
    getline(cin, sementara);
    n = atoi(sementara.c_str());

    for (i=1 ; i <=n; i++)
    {
        cout<<" Masukkan data "<<i<<" : ";
        getline(cin, sementara);
        datas[i] = atoi(sementara.c_str());
    }

    setcolor(13);
    cout<<"\n\n DATA OTOMATIS DISORTING SECARA ASCENDING MENGGUNAKAN SELECTION SORT!";
    setcolor(7);

        setcolor(10);
        cout<<endl<<endl;
        cout<<" HASIL SORTING ADALAH : ";

        for (i = 1; i <=(n-1); i++)
        {
            js = i+1;
            kunci_kecil = i;

            while (js <= n)
            {
                if (datas[kunci_kecil] > datas[js])
                {
                    kunci_kecil = js;
                }
                js++;
            }

            data_sementara = datas[kunci_kecil];
            datas[kunci_kecil] = datas[i];
            datas[i] = data_sementara;

        }

        for(i = 1; i <= n ;i++)
        {
            if(i < n)
                cout<<datas[i]<<", ";
            else
                cout<<datas[i]<<". ";
        }
        setcolor(7);
        cout<<endl<<endl;

        L = 1, R = n;

    cout<<endl;
    cout<<" Masukan data yang ingin dicari : ";
    getline(cin, sementara);
    caris = atoi(sementara.c_str());

    while((L<=R) && (ketemu == 0))
    {
        tengah = (L + R)/2;

        if(datas[tengah] == caris)
            ketemu = 1;
        else if (caris < datas[tengah])
            R = tengah - 1;
        else if (caris > datas[tengah])
            L = tengah + 1;
    }
    cout<<endl;
    if(ketemu == 1)
    {
        setcolor(10);
        cout<<" Data telah ditemukan pada posisi "<<tengah<<endl<<endl;
        setcolor(7);
    }
    else
    {
        setcolor(12);
        cout<<" Data tidak ditemukan"<<endl<<endl;
        setcolor(7);
    }

}


