#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {

    protected:
        int age;
        string name;

    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;

        virtual ~Person() {}

};

class Professor: public Person{


    private:

        int pub;
        int cur_id;
        static int id;

    public:

        Professor(){

            cur_id = ++id;
        }

        void getdata() override {
            cin >> name >> age >> pub;
        }

        void putdata() override {
            cout << name << " "<< age << " " << pub << " " << cur_id << endl; 
        
        }

};

int Professor::id = 0;

class Student : public Person{


    private:
        int notas[6];
        int cur_id;
        static int id;

    public:

        Student(){
            cur_id = ++id;
        }

        void getdata() override{
            cin >> name >> age;
            for ( int i =0; i<6; i++){
                cin >> notas[i];

            }
        }

        void putdata() override {
            int sum = 0;
            for (int i = 0; i < 6; i++) {
                sum += notas[i];
            }
            cout << name << " " << age << " " << sum << " " << cur_id << endl;
        }


};

int Student::id=0;






