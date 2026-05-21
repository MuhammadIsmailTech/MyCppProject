class Student 
{
private:
    string name;
    int age;

public:
    void setDetails(string n, int a)
 {
        name = n;
        age = a;
    }

    void showDetails()
 {
        cout << "Name: " << name <<endl;
        cout<< "Age: " << age << endl;
    }
};