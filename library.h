#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>
#include<malloc.h>
#include<Windows.h>


typedef struct Tours Tours;

struct Tours {
	int price;
	char* name;
	union {
		char date[9];
		int days;
	}unite;
	int flag;
	Tours* prev;
	Tours* next;
};
int is_empty(Tours* list);//to check whether we have any lists

void input_data_from_push(Tours** p);//when i chose the type of pushing(at the beginning or at the end) this function is for entering data

void push_front(Tours** list);//push at the beginning

void push_back(Tours** list);//push at the end

void push(Tours**list); //to add new lists

void pushSpecialDate(Tours** list, char* namee, int pricee, char* dataa); //uploading list with date of start from  file

void pushSpecialDays(Tours** list, char* namee, int pricee, int dayss); //uploading list with trip's duration from file

void delete_list(Tours** list);//delete a list

void printFull(Tours** list);

void print(Tours* list, int Amount);

void freeLists(Tours* list);//to free lists

void Search(Tours* list);//to find a list using one parametere

void CompleteSearch(Tours* list);//to find a list entering all parameteres

void inputIntoText(Tours* list, char* arr);

void inputIntoBin(Tours* list, static int flagg, FILE* f);

void FileCreate(Tours* list);//need this function to creater file(txt or bin) in order to save into them

int UploadBin(Tours** list);

void TextUpload(Tours** list);
