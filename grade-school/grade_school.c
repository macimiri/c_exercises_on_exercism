#include "grade_school.h"

int compare(const void *a, const void *b){
    student_t s1 = *(student_t*)(a);
    student_t s2 = *(student_t*)(b);
    // first compare by grade
    if(s1.grade < s2.grade){
        return -1;
    }
    else if(s1.grade > s2.grade){
        return 1;
    }

    // then compare by name
    return strcmp(s1.name, s2.name);
}

void init_roster(roster_t *actual){
    actual->count = 0;
}

bool add_student(roster_t *actual, char name[], int grade){
    // check to see if student already exists
    size_t i;
    for(i=0; i<actual->count; i++){
        if(!strcmp(actual->students[i].name, name)){
            return false;
        }
    }

    // add student to actual roster
    actual->students[actual->count].grade = grade;
    strcpy(actual->students[actual->count].name, name);
    actual->count++;

    // sort the roster - first by grade, then by name
    qsort(actual->students, actual->count, sizeof(student_t), compare);

    return true;
}

roster_t get_grade(roster_t *actual, uint8_t desired_grade){
    // create the return struct
    roster_t rtn = {0};

    // copy the student_t over to the return struct if of the desired_grade
    int i;
    for(i=0; (size_t)i < actual->count; i++){
        if(actual->students[i].grade == desired_grade){
            memcpy(&rtn.students[rtn.count], &actual->students[i], sizeof(student_t));
            rtn.count++;
        }
    }

    return rtn;
}
