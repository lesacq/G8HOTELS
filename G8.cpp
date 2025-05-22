#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        fstream myhotel;
        myhotel.open("hotel.txt",ios::in | ios::out | ios::trunc);


        string usertype,name,date1,date2,preference,paymentmode;
        int num,guestnum,contact;

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
            cout<<"Welcome! Are you an admin or a guest(admin/guest): ";
            cin >> usertype;
            myhotel<<"Welcome! Are you an admin or a guest(admin/guest): "<<usertype;
            cout<<endl;
            myhotel<<endl;
            if (usertype=="admin")
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
                          "4.General Overview\n\n";
                    myhotel<<"1.Add Guest\n"
                          "2.Update guest info\n"
                          "3.Delete guest info\n"
                          "4.General Overview\n\n";
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
                        cout<<"Enter guest mode of payment(Momo/Bank): ";
                        cin >>paymentmode;
                        myhotel<<"Guest paymentmode is: "<<paymentmode<<endl;

                        while (true)
                        {
                            if (paymentmode=="Momo")
                            {
                                cout<<"This is our official Momo number: 0592332333\nName: G8 HOTELS\n\n";
                                myhotel<<"For Momo, this is our official Momo number: 0592332333\nName: G8 HOTELS\n\n";
                                break;
                            }
                            else if (paymentmode=="Bank")
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
                        break;

                    }
                    else if(num==2)
                    {
                        cout<<"Guest info updates."<<endl;
                        myhotel<<"Guest info updates.\n\n";
                        break;
                    }
                    else if (num==3)
                    {
                        cout<<"Guest info deleted successfully"<<endl;
                        myhotel<<"Guest info deleted successfully\n\n";
                        break;
                    }
                    else if (num==4)
                    {
                        cout<<"General Overview"<<endl;
                        myhotel<<"General Overview";
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
            else if(usertype=="guest")
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
