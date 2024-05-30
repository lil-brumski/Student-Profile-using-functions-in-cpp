#include <iostream>
#include <string>
#include <memory>

class Age{
    protected:
      int day;
      int month;
      int year;
      
    public:
      Age(int d, int m, int y): day(d), month(m), year(y) {}
      
      void dob(){
          std::cout<<"Date of birth is "<<day<<"/"<<month<<"/"<<year<<"."<<std::endl;
          }
    };
    
class Student{
    protected:
      std::string name;
      std::string department;
      Age age;
      
    public:
      Student(std::string n, std::string d, const Age& a): name(n), department(d), age(a) {}
      
      void details(){
          std::cout<<"Name: "<<name<<"."<<std::endl;
          std::cout<<"Department: "<<department<<"."<<std::endl;
          age.dob();          
          }
    };

int main(){
    
    {//Using Smart Pointers.
    std::cout<<"SMART POINTER WAY:"<<std::endl;;
    
    std::unique_ptr<Age> age = std::make_unique<Age >(03, 01, 2007);
    
    std::unique_ptr<Student> student = std::make_unique<Student>("David Tamaratare Oghenebrume", "Computer Engineering", *age);
    student->details();
    
    std::cout<<std::endl;
    
    std::cout<<"The \"age\" and \"student\" pointers will automatically get deleted when they leave this scope \"{}\"."<<std::endl;;
    }//End of Scope for the smart pointers.
        
    
    std::cout<<std::endl;
    std::cout<<std::endl;
       
    
    {//Using Raw pointers.
    std::cout<<"RAW POINTER WAY:"<<std::endl;;
    
    Age *age = new Age(03,01,2007);
    
    Student *student = new Student("David Tamaratare Oghenebrume", "Computer Engineering", *age);
    
    student->details();
    
    delete age;
    delete student;
    
    age = nullptr;
    student = nullptr;
    
    std::cout<<std::endl;
    
    //Trying to run this code just below 👇 this comment will return a Segmentation Fault. Don't use raw pointers in C++, use smart pointers and RAII for memory management!
    //student->details();
    
    //Message to check if the raw pointers were actually deleted with no issues.
    std::cout<<"Deleted raw pointers."<<std::endl;
    }
    
    
    std::cout<<std::endl;            
 
}