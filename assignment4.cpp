#include<iostream>
using namespace std;

class Publication{
    private:
    string title;
    float price;

    public:
    void getdata(){
        cin.ignore();
        cout << "Enter the title of the material: ";
        getline(cin,title);
        cout << "Enter the price of the material: ";
        cin >> price;
    }
    void putdata(){
        cout << "Title: " << title;
        cout << "Price: " << price;
    }

};

class Book : public Publication {
    private:
    int pages;

    public:
    void getdata_Book(){
        Publication :: getdata();
        cout << "Enter the number of pages: ";
        cin >> pages;
    }
    void putdata_Book(){
        Publication :: putdata();
        cout << "Pages: " << pages;
    }
};

class Tape : public Publication{
    private:
    float time;

    public:
    void getdata_Tape(){
        Publication :: getdata();
        cout << "Enter the duration in minutes: ";
        cin >> time;
    }
    void putdata_Tape(){
        Publication :: putdata();
        cout << "Time: " << time << "min";
    }
};

int main(){
    int n;
    Book b;
    Tape t;
    cout << "Which product you wanted to inquire?";
    cout << "\n1. Book \n 2. Tape \n";
    cin >> n;

        switch(n){
            case 1:
            cout << "For the Book: " << endl;
            b.getdata_Book();
            b.putdata_Book();
            break;

            case 2:
            cout << "For the Tape: " << endl;
            t.getdata_Tape();
            t.putdata_Tape();
            break;

            default:
            cout << "Please choose either 1 or 2: " << endl;
    }

    return 0;
}