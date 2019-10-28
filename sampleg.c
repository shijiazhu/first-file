#include "sampleg.h"

Student initStu(){
	Student *ptrStu = (Student *)malloc(sizeof(Student));
	printf("请输入你的名字 ");
	scanf("%s", ptrStu->name);
	printf("请输入你的id ");
	scanf("%d", ptrStu->id);
	printf("请输入你的成绩 ");
	scanf("%f", ptrStu->record);

	return *ptrStu;
}

void outStu(Student stu){
	printf("%s's id: %d and record: %f\n", stu.name, stu.id, stu.record);

	return;
}

float getRec(Student stu){
	return stu.record;
}

void setRec(int id, float record){
	Student stu;
	if(stu.id == id){
		stu.record = record;
	}

	return;
}
