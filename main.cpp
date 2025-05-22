#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
        fstream myhotel;
        myhotel.open("hotel.txt",ios::in | ios::out | ios::trunc);


        string name,date1,date2,preference,contact,deletes;
        int usertype,num,paymentmode,guestnum;

        if (!myhotel.is_open())
        {
            cout<<"Error while creating file\n";
        }
        else
        {

        cout<<"                              WELCOME TO G8 HOTELS"<<endl;
        cout<<"                         ------------------------------"<<endl;
        }
        myhotel<<"                                                WELCOME TO G8 HOTELS\n";
        myhotel<<"                                           ------------------------------\n";

        while (true)
        {
            cout<<"Welcome! Select your user type.\n"
                  "1.Admin\n"
                  "2.Guest\n";
            cout<<"Choose from the above list: ";
            cin >> usertype;
            myhotel<<"Welcome! select your user type.\n"
                     "1.Admin\n"
                     "2.Guest\n";
            myhotel<<"choose from the above list: "<<usertype;
            cout<<endl;
            myhotel<<endl;
            if (usertype==1)
            {
                myhotel<<"\r\r\rAdmin Page\n\n";
                while (true)
                {
                    cout<<"Welcome admin! You have full access on this page\n";
                    myhotel<<"Welcome admin! You have full access on this page\n";
                    cout<<"Kindly select your activity from the menu.\n";
                    myhotel<<"Kindly select your activity from the menu.\n";
                    cout<<"1.Add Guest\n"
                          "2.Update guest info\n"
                          "3.Delete guest info\n"
                          "4.General Overview\n"
                           "5.Exit\n\n";
                    myhotel<<"1.Add Guest\n"
                          "2.Update guest info\n"
                          "3.Delete guest info\n"
                          "4.General Overview\n"
                           "Exit\n\n";
                    cout<<endl;
                    myhotel<<endl;
                    cout<<"Select your activity from the above menu: ";
                    cin>>num;
                    myhotel<<"Select your activity from the above menu: "<<num;
                    cout<<endl;
                    myhotel<<endl;
                    myhotel<<endl;

                    if (num==1)
                    {
                        cout<<"Enter name of guest: ";
                        cin.ignore();
                        getline(cin,name);
                        myhotel<<"Guest name is"<<name<<endl;

                        cout<<"Enter check-in date(DD/MM/YY): ";
                        cin >>date1;
                        myhotel<<"Guest check-in date is: "<<date1<<endl;

                        cout<<"Enter check-out date(DD/MM/YY): ";
                        cin>>date2;
                        myhotel<<"Guest check-out date is: "<<date2<<endl;

                        cout<<"Enter number of guests: ";
                        cin>>guestnum;
                        myhotel<<"NUmber of guest to be available are: "<<guestnum<<endl;

                        cout<<"Kindly enter guest contact: ";
                        cin>>contact;
                        myhotel<<"Contact of guest is: "<<contact<<endl;

                        cout<<"Enter guest room preferences if any: ";
                        cin.ignore();
                        getline(cin,preference);
                        myhotel<<"Guest room preference: "<<preference<<endl;
                        cout<<"Select guest mode of payment.\n"
                              "1.Momo\n"
                              "2.Bank\n";
                        cout<<"Choose your choice: ";
                        cin >>paymentmode;
                        myhotel<<"Select guest payment mode"
                                 "1.Momo"
                                 "2.Bank";
                        myhotel<<"Choose your choice: "<<paymentmode<<endl;

                        while (true)
                        {
                            if (paymentmode==1)
                            {
                                cout<<"This is our official Momo number: 0592332333\nName: G8 HOTELS\n\n";
                                myhotel<<"For Momo, this is our official Momo number: 0592332333\nName: G8 HOTELS\n\n";
                                break;
                            }
                            else if (paymentmode==2)
                            {
                                cout<<"The official Bank account number is: 23454657643546\nAcc name: G8 HOTELS\n\n";
                                myhotel<<"For Bank,the official Bank account number is: 23454657643546\nAcc name: G8 HOTELS\n\n";
                                break;
                            }
                            else
                            {
                                cout<<"Kindly note we don't accept any other form of payment.Please use the available options.\n";
                                cout<<"Enter guest mode of payment(Momo/Bank): ";
                                cin>>paymentmode;
                                myhotel<<"Kindly note we don't accept any other form of payment.Please use the available options.\n";
                                myhotel<<"Guest payment mode is: "<<paymentmode<<endl;
                            }
                        }


                    }
                    else if(num==2)
                    {

                        cout<<"To be updated "<<endl;
                        cout<<endl;

                    }
                    else if (num==3)
                    {
                        cout<<"Guest info deletions"<<endl;
                        myhotel<<"Guest info deletion\n\n";
                        cout<<endl;
                        cout<<"Enter name of guest to be deleted: ";
                        cin.ignore();
                        getline(cin,deletes);
                        if (deletes==name)
                        {
                            cout<<"Guest info deleted successfully\n\n";
                            myhotel<<"Guest info deleted successfully\n\n";
                        }
                        else
                        {
                            cout<<"Guest info not present in the system\n\n";
                            myhotel<<"Guest info not present\n\n";
                        }

                    }
                    else if (num==4)
                    {
                        cout<<"General Overview"<<endl;
                        myhotel<<"General Overview";

                    }
else if (num==5)
                                        {
                        cout<<"Exit"<<endl;
                        myhotel<<"Exit"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"Invalid input.Do well to chose properly\n\n"<<endl;
                        myhotel<<"Invalid input.Do well to chose properly\n\n"<<endl;
                    }
                }
              break;
            }
            else if(usertype==2)
            {
                myhotel<<"\r\r\rGuest Page.\n\n";
                cout<<"Welcome Guest! You have limited access on this page."<<endl;
                myhotel<<"Welcome Guest! You have limited access on this page.\n";
                cout<<"You can only book for a room on this page.For any other activity, see the admins.\n";
                myhotel<<"You can only book for a room on this page.For any other activity, see the admins.\n";
                cout<<endl;
                myhotel<<endl;
                cout<<"Enter your name: ";
                cin.ignore();
                getline(cin,name);
                myhotel<<"Enter your name: "<<name<<endl;

                cout<<"kindly enter your contact: ";
                cin>>num;
                myhotel<<"Enter your contact: "<<num<<endl;

                cout<<"Enter your room preference: ";
                cin.ignore();
                getline(cin,preference);
                myhotel<<"Enter your room preference: "<<preference<<endl;
                cout<<"Enter check-in date(DD/MM/YY): ";
                cin>>date1;
                myhotel<<"Enter check-in date: "<<date1<<endl;
                cout<<"Enter check-out date(DD/MM/YY): ";
                cin>>date2;
                myhotel<<"Enter check-out date: "<<date2<<endl;
                cout<<endl;
                myhotel<<endl;
                cout<<" Info submitted successfully\n ";
                myhotel<<" Info submitted successfully\n ";
                break;
            }
            else
            {
                cout<<"Invalid user type. Please choose between admin or guest(admin/guest)\n\n";
                myhotel<<"Invalid user type. Please choose between admin or guest(admin/guest)\n\n";
            }
        }
        return 0;
}
