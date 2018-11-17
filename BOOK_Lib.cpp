#include<iostream>
using namespace std;
//class for book details
class Book
{
public:
       string name;
       string author;
       int price;
       int cnt;

};
class Lib
{
 private:
              int Size; //to maintain total count of book
            Book books[10]; //create array of books
public:
        void Fill_data_book();
        void Display_book();
        void srch();
        void update();
        void issue();


};
void Lib::Fill_data_book()
{
    //accept details from user
 cout<<" Enter the total count of BOOK to FIll data \n ";
 cin>>Size;
 for(int i=0;i<Size;i++)
 {
    cout<<" \n Fill Below Details of BOOK "<<i+1<<"\n";
    cout<<" Name of BOOK : ";
    cin>>books[i].name;
    cout<<" Name of Author : ";
    cin>>books[i].author;
    cout<<" Price of BOOK : ";
    cin>>books[i].price;
    cout<<" Total copies of BOOK : ";
    cin>>books[i].cnt;
 }

}
void Lib::Display_book()
{
    //Display details of BOOK

    cout<<" Total count of BOOK ";
    cout<<Size<<"\n";
 for(int i=0;i<Size;i++)
 {
    cout<<" \n Details of BOOK "<<i+1<<"\n";
    cout<<" Name of BOOK : ";
    cout<<books[i].name<<"\n";
    cout<<" Name of Author : ";
    cout<<books[i].author<<"\n";
    cout<<" Price of BOOK : ";
    cout<<books[i].price<<"\n";
    cout<<" Total copies of BOOK : ";
    cout<<books[i].cnt<<"\n";
 }
}
void Lib::srch()
{
    string name1,author1;
    cout<<"Enter the Name of Book you Require \n";
    cin>>name1;
    cout<<"Enter the Name of Author of Book "<<name1<<" \n";
    cin>>author1;
    int flag=0;
    for(int i=0;i<Size;i++)
    {
        if(books[i].name==name1 && books[i].author==author1)
        {
            flag=1;//to display outside loop
            break;
        }

    }
    if(flag==1)
    {
        cout<<"Book is available \n";
    }
    else
    {
        cout<<"Book is not available\n";

    }

}
void Lib::update()
{
    string name1,author1;
    int pos=0;
    cout<<"Enter the Name of Book you you want update \n";
    cin>>name1;
    cout<<"Enter the Name of Author of Book "<<name1<<" \n";
    cin>>author1;
    int flag=0;
    for(int i=0;i<Size;i++)
    {
        if(books[i].name==name1 && books[i].author==author1)
        {
            flag=1;
            pos=i;
            break;
        }

    }
    if(flag==1)
    {
    cout<<"  Updated Name of BOOK : ";
    cin>>books[pos].name;
    cout<<" updated Name of Author : ";
    cin>>books[pos].author;
    cout<<" Updated Price of BOOK : ";
    cin>>books[pos].price;
    cout<<" Updated  Total copies of BOOK : ";
    cin>>books[pos].cnt;
    }
    else
    {
        cout<<"Book is not available\n";

    }

}
void Lib::issue()
{
    string name1,author1;
    cout<<"Enter the Name of Book you Require \n";
    cin>>name1;
    cout<<"Enter the Name of Author of Book "<<name1<<" \n";
    cin>>author1;
    int flag=0;
    int pos=0;
    for(int i=0;i<Size;i++)
    {
        if(books[i].name==name1 && books[i].author==author1)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    {
        books[pos].cnt--;
        cout<<" Book issued\n";
    }
    else
    {
        cout<<"Book is not available\n";

    }

}

int main()
{
    Lib obj;
    char ans;
    int ch;
    do{
    cout<<" |||||||||||| Library |||||||||||| \n ";
    cout<<"\n***************************************\n";
    cout<<" \n 1. Insert BOOK Details \n 2. Display BOOK Details \n 3. Search BOOK Details \n 4. Update BOOK Details \n 5. Issue BOOK  \n ";
   cout<<"\n***************************************\n";
    cout<<" Enter your choice \n";
    cin>>ch;
        switch(ch)
        {
       case 1:
                obj.Fill_data_book();
                break;
        case 2:
                obj.Display_book();
                break;
        case 3:
                obj.srch();
                break;
        case 4:

                obj.update();
                obj.Display_book();
                break;
        case 5:
                obj.issue();
                obj.Display_book();
                break;

        }
    cout<<"Do you want do it again \n";
    cin>>ans;
    }while(ans=='y'||ans=='Y');
    return 0;
}
/*output
 |||||||||||| Library ||||||||||||

***************************************

 1. Insert BOOK Details
 2. Display BOOK Details
 3. Search BOOK Details
 4. Update BOOK Details
 5. Issue BOOK

***************************************
 Enter your choice
1
 Enter the total count of BOOK to FIll data
 2

 Fill Below Details of BOOK 1
 Name of BOOK : JAVA
 Name of Author : Bruce
 Price of BOOK : 150
 Total copies of BOOK : 10

 Fill Below Details of BOOK 2
 Name of BOOK : CPP
 Name of Author : Balguru
 Price of BOOK : 350
 Total copies of BOOK : 5
Do you want do it again
y
 |||||||||||| Library ||||||||||||

***************************************

 1. Insert BOOK Details
 2. Display BOOK Details
 3. Search BOOK Details
 4. Update BOOK Details
 5. Issue BOOK

***************************************
 Enter your choice
2
 Total count of BOOK 2

 Details of BOOK 1
 Name of BOOK : JAVA
 Name of Author : Bruce
 Price of BOOK : 150
 Total copies of BOOK : 10

 Details of BOOK 2
 Name of BOOK : CPP
 Name of Author : Balguru
 Price of BOOK : 350
 Total copies of BOOK : 5
Do you want do it again
y
 |||||||||||| Library ||||||||||||

***************************************

 1. Insert BOOK Details
 2. Display BOOK Details
 3. Search BOOK Details
 4. Update BOOK Details
 5. Issue BOOK

***************************************
 Enter your choice
3
Enter the Name of Book you Require
CPP
Enter the Name of Author of Book CPP
Balguru
Book is available
Do you want do it again
y
 |||||||||||| Library ||||||||||||

***************************************

 1. Insert BOOK Details
 2. Display BOOK Details
 3. Search BOOK Details
 4. Update BOOK Details
 5. Issue BOOK

***************************************
 Enter your choice
4
Enter the Name of Book you you want update
CPP
Enter the Name of Author of Book CPP
Balguru
  Updated Name of BOOK : Thinkingcpp
 updated Name of Author : ackel
 Updated Price of BOOK : 350
 Updated  Total copies of BOOK : 10
 Total count of BOOK 2

 Details of BOOK 1
 Name of BOOK : JAVA
 Name of Author : Bruce
 Price of BOOK : 150
 Total copies of BOOK : 10

 Details of BOOK 2
 Name of BOOK : Thinkingcpp
 Name of Author : ackel
 Price of BOOK : 350
 Total copies of BOOK : 10
Do you want do it again
y
 |||||||||||| Library ||||||||||||

***************************************

 1. Insert BOOK Details
 2. Display BOOK Details
 3. Search BOOK Details
 4. Update BOOK Details
 5. Issue BOOK

***************************************
 Enter your choice
5
Enter the Name of Book you Require
JAVA
Enter the Name of Author of Book JAVA
Bruce
 Book issued
 Total count of BOOK 2

 Details of BOOK 1
 Name of BOOK : JAVA
 Name of Author : Bruce
 Price of BOOK : 150
 Total copies of BOOK : 9

 Details of BOOK 2
 Name of BOOK : Thinkingcpp
 Name of Author : ackel
 Price of BOOK : 350
 Total copies of BOOK : 10
Do you want do it again*
/
