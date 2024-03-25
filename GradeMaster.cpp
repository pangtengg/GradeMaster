#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA(string language);
void calculateCGPA(string language);
void method(string language);

void displayMenu(string language)
{
    int input;
    while(true)
    {
    system("cls");
        if (language == "english")
    {
        cout<< "=========================================================================="<<endl;
        cout<< "            Welcome to GradeMaster GPA/CGPA Calculator !                  "<<endl;
        cout<< "=========================================================================="<<endl;
        cout<< "        MENU:" << endl;
        cout<< "                   1. Calculate GPA (Grade Point Average)"<<endl;
        cout<< "                   2. Calculate CGPA (Cumulative Grade Point Average)"<<endl;
        cout<< "                   3. Formula Applied Here for GPA & CGPA Calculation" <<endl;
        cout<< "                   4. Exit Application" <<endl;
    }
        else if (language == "malay")
    {
        cout<< "=========================================================================="<<endl;
        cout<< "            Selamat Datang ke GradeMaster Kalkulator GPA/CGPA  !          "<<endl;
        cout<< "=========================================================================="<<endl;
        cout<< "            MENU:" << endl;
        cout<< "                   1. Kira GPA (Purata Mata Gred)" <<endl;
        cout<< "                   2. Kira CGPA (Purata Kumulatif Mata Gred)" <<endl;
        cout<< "                   3. Formula Pengiraan GPA & CGPA Program Ini" <<endl;
        cout<< "                   4. Keluar Aplikasi" <<endl;
     }
        cout<< "--------------------------------------------------------------------------" <<endl;
        cout<< "Enter your choice: ";
        cin>>input;
        switch (input) {
            case 1:
                calculateGPA(language);
                break;
            case 2:
                calculateCGPA(language);
                break;
            case 3:
                method(language);
                break;
            case 4:
                exit(EXIT_SUCCESS);
                break;
            default:
                  if (language == "english")
                cout << "You have entered wrong input. Please try again!" << endl;
                else if (language == "malay")
                cout << "Anda telah memasukkan pilihan yang salah. Sila cuba lagi!" << endl;
                break;
    }
  }
}
void displayLanguageSelection()
{
        int choice;
        string language;
        cout<<"==================================================="<<endl;
        cout<<"        GradeMaster GPA & CGPA Calculator          "<<endl;
        cout<<"==================================================="<<endl;
        cout<<" Please select a language [Sila pilih bahasa] :    "<<endl;
        cout<<"         1. English                                "<<endl;
        cout<<"         2. Malay                                  "<<endl;
        cout<<" Enter your choice [Masukkan pilihan anda]: ";
        cin >> choice;
        switch (choice){
        case 1:
        language = "english";
        break;
        case 2:
        language = "malay";
        break;
        default:
        language = "english";
        break;
       }
displayMenu(language);
        int input;
        sub:
        cout<<"Enter your choice: ";
        cin>>input;
        switch (input)
       {
        case 1:
        calculateGPA(language);
        break;
        case 2:
        calculateCGPA(language);
        break;
        case 3:
        method(language);
        break;
        case 4:
         exit(EXIT_SUCCESS);
        break;
        default:
     if (language == "english")
        cout << "You have entered wrong input. Try again!\n" << endl;
     else if (language == "malay")
        cout << "Anda telah memasukkan pilihan yang salah. Sila cuba lagi!\n" << endl;
        goto sub;
         break;
        }
}
void calculateGPA(string language)
{
      int q;
      system("cls");
      if (language == "english")
    {
      cout << "-------------- GPA Calculator -----------------" << endl;
      cout << " Enter the number of subjects you wish to calculate : ";
    }
      else if (language == "malay")
    {
      cout << "-------------- Mengira GPA -----------------" << endl;
      cout << " Masukkan bilangan mata pelajaran yang ingin anda kira :";
    }
      cin>>q;
      string coursecode[q];
      float credit[q];
      float point[q];
    for (int i=0; i<q; i++)
        {
            if (language == "english")
            {
              cout<<endl<< i+1 << " Enter the course code: ";
              cin>>coursecode[i];
              cout<<i+1<< " Enter the credit hours for "<< coursecode[i] <<": ";
              cin >> credit[i];
              cout<<i+1<< " Enter the grade point of "<< coursecode[i] << ": ";
              cin >> point[i];
            }
            else if (language == "malay")
            {
              cout<<endl<<i+1<< " Masukkan nama kursus: ";
              cin>>coursecode[i];
              cout<<i+1<< " Masukkan jam kredit untuk "<< coursecode[i] <<": ";
              cin>>credit[i];
              cout<<i+1<< " Masukkan mata gred "<< coursecode[i] << ": ";
              cin>>point[i];
            }
            cout<<endl<<"---------------------------------------------" <<endl;
            }
     float sum = 0;
     float total;
     for (int i = 0; i < q; i++)
     {
     total = credit[i] * point[i];
     sum = sum + total;
     }
     float totalCredit = 0;
     for (int k=0; k<q; k++)
     {
     totalCredit = totalCredit + credit[k];
     }
      if (language == "english")
      {
          cout<<endl<<" Total Grade Points: "<<sum<<" |  Total Credit Hours: "<<totalCredit<<endl;
          cout<<"**** Total GPA: " <<sum / totalCredit<<" ****"<<endl;
      }
      else if (language == "malay")
      {
          cout<<endl<<" Jumlah Mata Gred: " <<sum<<"|  Jumlah Jam Kredit: "<<totalCredit<<endl;
          cout<<"**** Purata Mata Gred:" <<sum / totalCredit<<" ****"<<endl;
      }
sub:
 int inmenu;
 if (language == "english")
    {
     cout << "\n\n\n1. Calculate Again" << endl;
     cout << "2. Go Back to Main Menu" << endl;
     cout << "3. Exit This App \n\n" << endl;
     cout << "Your Input: ";
    }
    else if (language == "malay")
    {
     cout << "\n\n\n1. Kira Semula" << endl;
     cout << "2. Kembali ke Menu Utama" << endl;
     cout << "3. Keluar Aplikasi\n\n" << endl;
     cout << "Pilihan Anda: ";
    }
    cin >> inmenu;
    switch (inmenu)
     {
      case 1:
      calculateGPA(language);
      break;
      case 2:
      displayMenu(language);
      break;
      case 3:
      exit(EXIT_SUCCESS);
      break;
      default:
        if (language == "english")
        cout << "You have entered wrong input. Try again!\n" << endl;
     else if (language == "malay")
        cout << "Anda telah memasukkan pilihan yang salah. Sila cuba lagi!\n" << endl;
        goto sub;
        break;
 }
}
void calculateCGPA(string language)
{
 system("cls");
 int s;
   if (language == "english")
    {
      cout << "-------------- CGPA Calculating -----------------" <<endl<<endl;
      cout << "Enter the number of semesters: ";
    }
   else if (language == "malay")
    {
      cout << "-------------- Mengira CGPA -----------------" <<endl<<endl;
      cout << "Masukkan bilangan semester yang ingin anda kira : ";
    }
    cin >> s;

    float semresult[s];
    for (int i=0; i<s; i++)
    {
    if (language == "english")
           cout<<endl<<"Enter Semester "<< i+1<< " Result (GPA): ";
    else if (language == "malay")
           cout<<endl<<"Masukkan Keputusan Semester "<<i+1<< " (GPA): ";
    cin >> semresult[i];
    }
    float semtotal = 0;
    for (int j=0; j<s;j++)
       semtotal = semtotal + semresult[j];
     if (language == "english")
            cout<<endl<<"**** CGPA of "<< s << " Semester : " << semtotal / s <<" ****"<<endl;
     else if (language == "malay")
            cout<<endl<<"**** CGPA "<< s << " Semester : " << semtotal / s <<" ****"<<endl;
    sub:
    int inmenu;
    if (language == "english")
        {
            cout << "\n\n\n1. Calculate Again" << endl;
            cout << "2. Go Back to Main Menu" << endl;
            cout << "3. Exit This App \n\n" << endl;
            cout << "Your Input: ";
        }
    else if (language == "malay")
        {
            cout << "\n\n\n1. Kira Semula" << endl;
            cout << "2. Kembali ke Menu Utama" << endl;
            cout << "3. Keluar Aplikasi\n\n" << endl;
            cout << "Pilihan Anda: ";
        }
     cin >> inmenu;
    switch (inmenu)
        {
    case 1:
    calculateCGPA(language);
    break;
    case 2:
    displayMenu(language);
    break;
    case 3:
    exit(EXIT_SUCCESS);
    default:
    if (language == "english")
            cout << "\n\nYou have entered wrong input! Please choose again!" << endl;
    else if (language == "malay")
            cout << "\n\nAnda telah memasukkan pilihan yang salah. Sila pilih lagi!" << endl;
        goto sub;
 }
}
void method(string language)
{
 system("cls");
 if (language == "english")
       {
        cout<<"-------------- Formula for Calculating GPA & CGPA -----------------"<<endl<<endl;
        cout<<"  GPA =  Sum of (Credit Hour * Grade Point) / Total Credit Hour "<<endl;
        cout<<" CGPA =  Sum of GPA / Number of Semesters "<<endl;
       }
 else if (language == "malay")
       {
        cout<<"-------------- Kaedah Pengiraan GPA & CGPA -----------------"<<endl<<endl;
        cout<<"  GPA = Jumlah (Jam Kredit * Mata Gred) / Jumlah Jam Kredit "<<endl;
        cout<<" CGPA = GPA Jumlah / Jumlah Semester "<<endl;
       }
 sub:
 int inmenu;
 if (language == "english")
    {
      cout << "\n\n\n1. Go Back to Main Menu" << endl;
      cout << "2. Exit This App \n\n" << endl;
      cout << "Your Input: ";
    }
 else if (language == "malay")
    {
      cout << "\n\n\n1. Kembali ke Menu Utama" << endl;
      cout << "2. Keluar Aplikasi\n\n" << endl;
      cout << "Pilihan Anda: ";
    }
  cin >> inmenu;
  switch (inmenu)
   {
    case 1:
    displayMenu(language);
    break;
    case 2:
    exit(EXIT_SUCCESS);
    default:
    if (language == "english")
            cout << "\n\nYou have entered wrong input! Please choose again!" << endl;
    else if (language == "malay")
            cout << "\n\nAnda telah memasukkan pilihan yang salah. Sila pilih lagi!" << endl;
        goto sub;
   }
}
int main()
{
 displayLanguageSelection();
 return 0;
}







