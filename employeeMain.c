//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind); 

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *phoneToFind); 

 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];     

    extern const int EmployeeTableEntries;      

 

    PtrToEmployee matchPtr;  //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n");  

    
    //Phone number test, number found

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215"); 

    if (matchPtr != NULL) 

        printf("Phone number 310-555-1215 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Phone number is NOT found in the record\n"); 



//Phone number test, number not found

matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1210"); 

if (matchPtr != NULL) 

    printf("Phone number 310-555-1210 is in record %d\n", matchPtr - EmployeeTable); 

else 

    printf("Phone number is NOT found in the record\n"); 

 

return EXIT_SUCCESS; 

} 
