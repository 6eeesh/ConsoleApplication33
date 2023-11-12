#include <iostream>
#include <string>
using namespace std;

/// <summary>
/// Класс Date предоставляет функциональность для хранения и управления информацией о дате в формате день, месяц, год.
/// Методы позволяют устанавливать и получать значения дня, месяца и года
/// Примеры использования:
///     Date myDate;
///     myDate.SetDay(15);
///     myDate.SetMonth(10);
///     myDate.SetYear(2023);
///     int day = myDate.GetDay();
/// </summary>
class Date {
    int day;
    int month;
    int year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 1900;
    }

    void SetDay(int day) {
        this->day = day;
    }

    int GetDay() const {
        return day;
    }

    void SetMonth(int month) {
        this->month = month;
    }

    int GetMonth() const {
        return month;
    }

    void SetYear(int year) {
        this->year = year;
    }

    int GetYear() const {
        return year;
    }
};

/// <summary>
/// Класс Student хранит информацию о студенте, включая личные данные (имя, фамилия, дата рождения, адрес, номер телефона) 
/// и оценки по различным предметам
/// Ключевые методы класса:
/// - SetBirthDate: устанавливает дату рождения студента
/// - GetBirthDate: возвращает дату рождения студента
/// - SetHomeAddress: устанавливает домашний адрес студента
/// - GetHomeAddress: возвращает домашний адрес студента
/// - SetPhoneNumber: устанавливает номер телефона студента
/// - GetPhoneNumber: возвращает номер телефона студента
/// - GetMathGrade: возвращает оценку по математике для определенного предмета
/// - AddChemistryGrade: добавляет оценку по химии для определенного предмета
/// - GetChemistryGrade: возвращает оценку по химии для определенного предмета
/// </summary>
class Student {
    string last_name;
    string first_name;
    string middle_name;
    Date birth_date;
    string home_address;
    string phone_number;
    int* grades_math;
    int* grades_physical_education;
    int* grades_chemistry;

public:
    /// <summary>
    /// Конструктор класса Student инициализирует объект с заданными именем и фамилией студента
    /// Также выделяется динамическая память под массивы оценок
    /// </summary>
    Student(string first, string last) {
        first_name = first;
        last_name = last;
        grades_math = nullptr;
        grades_physical_education = nullptr;
        grades_chemistry = nullptr;
    }

    /// <summary>
    /// Метод SetBirthDate устанавливает дату рождения студента
    /// </summary>
    void SetBirthDate(const Date& date) {
        birth_date = date;
    }

    /// <summary>
    /// Метод GetBirthDate возвращает дату рождения студента
    /// </summary>
    Date GetBirthDate() const {
        return birth_date;
    }

    /// <summary>
    /// Метод SetHomeAddress устанавливает домашний адрес студента
    /// </summary>
    void SetHomeAddress(const string& address) {
        home_address = address;
    }

    /// <summary>
    /// Метод GetHomeAddress возвращает домашний адрес студента
    /// </summary>
    string GetHomeAddress() const {
        return home_address;
    }

    /// <summary>
    /// Метод SetPhoneNumber устанавливает номер телефона студента
    /// </summary>
    void SetPhoneNumber(const string& phone) {
        phone_number = phone;
    }

    /// <summary>
    /// Метод GetPhoneNumber возвращает номер телефона студента
    /// </summary>
    string GetPhoneNumber() const {
        return phone_number;
    }

    /// <summary>
    /// Метод SetLastName устанавливает фамилию студента
    /// </summary>
    void SetLastName(const string& last) {
        last_name = last;
    }

    /// <summary>
    /// Метод GetLastName возвращает фамилию студента
    /// </summary>
    string GetLastName() const {
        return last_name;
    }

    /// <summary>
    /// Метод AddMathGrade добавляет оценку по математике для определенного предмета
    /// </summary>
    void AddMathGrade(int grade) {
        // Реализация добавления оценки в массив
    }

    /// <summary>
    /// Метод GetMathGrade возвращает оценку по математике для определенного предмета
    /// </summary>
    int GetMathGrade(int subject_index) const {
        return grades_math[subject_index];
    }

    /// <summary>
    /// Метод AddPhysicalEducationGrade добавляет оценку по физкультуре для определенного предмета.
    /// </summary>
    void AddPhysicalEducationGrade(int grade) {
    }

    /// <summary>
    /// Метод GetPhysicalEducationGrade возвращает оценку по физкультуре для определенного предмета.
    /// </summary>
    int GetPhysicalEducationGrade(int subject_index) const {
        return grades_physical_education[subject_index];
    }

    /// <summary>
    /// Метод AddChemistryGrade добавляет оценку по химии для определенного предмета.
    /// </summary>
    void AddChemistryGrade(int grade) {
    }

    /// <summary>
    /// Метод GetChemistryGrade возвращает оценку по химии для определенного предмета.
    /// </summary>
    int GetChemistryGrade(int subject_index) const {
        return grades_chemistry[subject_index];
    }

    /// <summary>
    /// Метод ShowStudentInfo выводит информацию о студенте, включая его фамилию, имя, отчество,
    /// дату рождения, домашний адрес, номер телефона и оценки по различным предметам.
    /// </summary>
    void ShowStudentInfo() const {
        cout << "Фамилия: " << last_name << "\n";
        cout << "Имя: " << first_name << "\n";
        cout << "Отчество: " << middle_name << "\n";

        cout << "Оценки по математике: ";
        for (int i = 0; i < 100; i++) {
            cout << grades_math[i] << " ";
        }
        cout << "\n";

        cout << "Оценки по физкультуре: ";
        for (int i = 0; i < 100; i++) {
            cout << grades_physical_education[i] << " ";
        }
        cout << "\n";

        cout << "Оценки по химии: ";
        for (int i = 0; i < 100; i++) {
            cout << grades_chemistry[i] << " ";
        }
        cout << "\n";
    }

    /// <summary>
    /// Деструктор класса Student освобождает выделенную динамическую память под массивы оценок.
    /// </summary>
    ~Student() {
        delete[] grades_math;
        delete[] grades_physical_education;
        delete[] grades_chemistry;
    }
};

int main() {
    setlocale(LC_ALL, "");

    Student student("Антон", "Васильев");

    Date birth_date;
    birth_date.SetDay(1);
    birth_date.SetMonth(1);
    birth_date.SetYear(2000);

    student.SetBirthDate(birth_date);
    student.SetHomeAddress("ул. Добровольского, 123");
    student.SetPhoneNumber("+38(097)264-18-54");

    student.AddMathGrade(95);
    student.AddMathGrade(88);

    student.AddPhysicalEducationGrade(85);
    student.AddPhysicalEducationGrade(90);

    student.AddChemistryGrade(75);
    student.AddChemistryGrade(80);

    student.ShowStudentInfo();

    student.SetLastName("Петров");
    student.SetPhoneNumber("+38(097)234-13-24");

    cout << "Измененная фамилия: " << student.GetLastName() << endl;
    cout << "Измененный телефонный номер: " << student.GetPhoneNumber() << endl;

    return 0;
}
