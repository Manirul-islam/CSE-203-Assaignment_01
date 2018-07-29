#include <iostream>
using namespace std;
    class test
    {
    private:
        int num;
        float *ptr;
    public:;
        test()
        {
            cout << "Enter total number of students:";
            cin >> num;
            ptr = new float[num];
            cout << "Enter GPA of students." << endl;
            for(int i=0; i<num;++i)
            {
                cout << "Student" << i+1 << ": ";
                cin >> *(ptr+i);
            }

        }
        ~test()
        {
            delete[] ptr;
        }
        void display()
        {
            cout << "\nDisplaying GPA of students." << endl;
            for(int i=0;i<num;++i)
            {
                cout << "Student" << i+1 << ": " << *(ptr+i) << endl;
            }
        }

    };
    int main()
    {
        test s;
        s.display();
        return 0;
    }
