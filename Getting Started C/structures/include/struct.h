#include <stdio.h>
#include <string.h>

#ifndef NAVTECC_CLASS_INC_H
#define NAVTECC_CLASS_INC_H

/************* UserInformation structure **************/
typedef struct UserInformation {
    char Name[20];
    char FatherName[20];
    int age;
    char Gender[20];
    char Qualification[30];
} UserData;

/*************** User Defined Functions ****************/
/**
 * @brief Fills a userdata structure.
 * @param uname: Name of the user whose data is filled in the structure.
 * @return Returns a UserData structure.
*/
UserData FillStruct(char uname[20]);

/**
 * @brief Prints the structure passed in its arguments.
 * @param u_data: UserData structure to be printed.
*/
void PrintStruct(UserData u_data);

#endif /* NAVTECC_CLASS_INC_H */
