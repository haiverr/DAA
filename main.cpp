#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

struct node{
    int nomor;
    char nama[30];
    float nilai;
    struct node *next;
};
struct node *baru;
struct node *head=NULL;
struct node *tail=NULL;

void inputData(int nomor, char nama[], float nilai)
{
    struct node *temp;
    baru = (struct node*)malloc(sizeof(struct node));
    baru->nomor = nomor;
    strcpy(baru->nama,nama);
    baru->nilai = nilai;
    if (head == NULL)
    {
    	head = baru;
    	baru->next = NULL;
        tail = baru;
	}else
	{
		tail->next = baru;
    	baru->next = NULL;
    	tail = baru;
	}
}

void tampilList(){
    tail = head;
	if (tail != NULL)
	{
		cout<<"\nNo\t Nama\t\t\tNilai\n";
	}else{
		cout<<"\nBelum Ada Data\n";
	}
	while (tail!=NULL)
	{
		cout << tail->nomor << "\t " << tail->nama << "\t" << tail->nilai << endl;
		tail = tail->next;
	}
	cout<<"\n";
}

void search(int num)
{
	struct node *p;
	p=head;
    if(p==NULL){
        cout<<"Nilai belum ada" << endl;
    }
	while(p!=NULL)
	{
		if(p->nomor == num)
		{
			cout << "No\tNama\t\t\tNilai" << endl;
			cout << p->nomor << "\t" << p->nama << "\t" << p->nilai << endl;
            cout<<endl;
			break;
		}
		p=p->next;
	}
	if (p == NULL){
		cout << endl << "Nomor pendaftaran " << num << " Tidak ada" << endl;
	}
}

int main(){
	struct node *head=NULL;
	int choice, nomor;
	inputData(29,(char*) "Beatrix Manullang",85);
	inputData(11,(char*) "Joshua LH Purba",82.5);
	inputData(18,(char*) "Christy Anastasia",77.5);
	inputData(9,(char*) "Martin Simamora",77.5);
	inputData(17,(char*) "Nicholas Hasusungan",77.5);
	inputData(24,(char*) "Fredo Agustinus",75);
	inputData(8,(char*) "Pirma Indah S S",72.5);
	inputData(25,(char*) "Winda Christina",72.5);
	inputData(19,(char*) "Faldo Jan Paulus",70.);
	inputData(7,(char*) "Ayu Oktavia Sianturi",70);
	inputData(20,(char*) "Rosiva Betaria P",67.5);
	inputData(16,(char*) "Kevin Dicky Munthe",65);
	inputData(23,(char*) "Putri Patricia LG",65);
	inputData(6,(char*) "Elsha Luviana Sihite",62.5);
	inputData(21,(char*) "Evy E Simanjuntak S",62.5);
	inputData(14,(char*) "Erni Yanti Harefa",60);
	inputData(15,(char*) "Felix I. Nicholas M",60);
	inputData(22,(char*) "Garry Joe A Nalle",55);
	inputData(3,(char*) "Laura Silvera S",52.5);
	inputData(13,(char*) "Given Julu P Yuda",52.5);
	inputData(2,(char*) "Samuel Abelino S",52.5);
	inputData(12,(char*) "Jonathan Haposan",50);
	inputData(1,(char*) "Raffles Ibrahim",45);
	inputData(4,(char*) "Caesar Christoper",42.5);
	inputData(5,(char*) "Veronika Paskalia",40);
	
	do{
        cout<<"\n====== HASIL TRY OUT KELAS XII ======\n\n";
        cout<<"1. Menampilkan semua data\n";
        cout<<"2. Cari \n";
		cout<<"9. Keluar \n";
        cout<<"\n=====================================\n";
        cout<<"Masukkan Pilihan : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        	system("cls");
            tampilList();
            system("PAUSE");
            system("cls");
            break;
        case 2:
        	system("cls");
        	cout << "=================[ PENCARIAN ]================" << endl;
            cout << "Masukkan Nomor pendaftaran : ";cin >> nomor;
            search(nomor);
            system("PAUSE");
            system("cls");
            break;
        case 9:
        	system("cls");
        	cout<<"\n=================[ KELUAR ]===================\n";
            exit(0);
        default:
            cout<<"input invalid";
			system("cls");
        }

    }while(choice!=9);
	return 0;
}
