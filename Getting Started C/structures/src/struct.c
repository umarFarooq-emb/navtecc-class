#include "struct.h"

int main() {
    UserData Umar;
    Umar = FillStruct("Umar");
    PrintStruct(Umar);

    return 0;
}

UserData FillStruct(char uname[20]) {
    UserData u_data;
    strcpy(u_data.Name, uname);
    strcpy(u_data.FatherName, "Father Name");
    u_data.age = 23;
    strcpy(u_data.Gender, "Male");
    strcpy(u_data.Qualification, "BS-Electrical");

    return u_data;
}

void PrintStruct(UserData u_data) {
    printf("UserName: %s\n", u_data.Name);
    printf("Father Name: %s\n", u_data.FatherName);
    printf("Age: %i\n", u_data.age);
    printf("Gender: %s\n", u_data.Gender);
    printf("Qualification: %s\n", u_data.Qualification);
}
