 #include "std_lib_facilities.h"

template<typename T>
struct S
{
    private:
        T val;
    public:
        S(T val)
        {
            this->val = val;
        }
    T & get();
    T & get() const;
    void set(const T&);
    void operator=(const T&);
};

template<typename T>
T& S<T>::get()
{
    return this->val;
}

template<typename T>
T& S<T>::get() const
{
    return this->val;
}

template<typename T>
void S<T>::set(const T& s)
{
    val = s;
}

template<typename T>
void S<T>::operator=(const T& o)
{
    val = o;
}

template<typename T>
void read_val(T & rv)
{
    cin >> rv;
}

int main()
{
    cout << endl;

    S<int> i(1);
    S<char> c('a');
    S<double> d(1.23);
    S<string> s("abcde");
    S<vector<int>> v(vector<int>{1,2,3});

    cout << "Kiirt ertekek:" << endl;
    cout << i.get() << endl;
    cout << c.get() << endl;
    cout << d.get() << endl;
    cout << s.get() << endl;
    for(int element : v.get())
    {
        cout << element << " ";
    }
    cout << endl;

    cout << "Irj egy egesz szamot:" << endl;
    int i_ud;
    read_val(i_ud);
    i.set(i_ud);

    cout << "Irj egy karaktert:" << endl;
    char c_ud;
    read_val(c_ud);
    c.set(c_ud);

    cout << "Irj egy double-t:" << endl;
    double d_ud;
    read_val(d_ud);
    d.set(d_ud);

    cout << "Irj egy szoveget:" << endl;
    string s_ud;
    read_val(s_ud);
    s.set(s_ud);

    cout << endl;

    cout << "Adott ertekek:" << endl;
    cout << i.get() << endl;
    cout << c.get() << endl;
    cout << d.get() << endl;
    cout << s.get() << endl;
}
