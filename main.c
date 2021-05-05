#include "library.h"
int main(void) {
	Tours* list=calloc(1,sizeof(Tours));
	list->next = list;
	list->prev = list;
	int choice;
	char c;
	while (1) {

		printf("What would you like to do?\n1-Add a list\n2-See the whole list\n3-Delete one list\n4-Find sth(One parameter)\n5-Find sth(full enter)\n6-Save your lists\n7-Upload a list\n8-Exit program\n");
		rewind(stdin);
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			system("CLS");
			push(&list);

			break;
		case 2:
			system("CLS");
			printFull(&list);
			break;
		case 3:
			system("CLS");
			delete_list(&list);

			break;
		case 4:
			system("CLS");
			printf("Wanna find sth(one parameter)?\ny/n\n");
			rewind(stdin);
			while (1) {
				rewind(stdin);
				if (!(scanf_s("%c", &c)) || c != 'y' && c != 'Y' && c != 'n' && c != 'N')
					printf("Sth went wrong!Please please, try again\n"); else break;
			}
			system("CLS");
			if (c == 'y' || c == 'Y')
				Search(list);

			break;
		case 5:
			system("CLS");
			printf("Wanna find sth(all parameteres)?\ny/n\n");
			rewind(stdin);
			while (1) {
				rewind(stdin);
				if (!(scanf_s("%c", &c)) || c != 'y' && c != 'Y' && c != 'n' && c != 'N')
					printf("Sth went wrong!Please please, try again\n"); else break;
			}
			system("CLS");
			if (c == 'y' || c == 'Y')
				CompleteSearch(list);

			break;
		case 6:
			system("CLS");
			printf("Let's create a file first\n");
			Sleep(1000);
			system("CLS");
			FileCreate(list);
			system("CLS");
			break;
		case 7:
			system("CLS");
			printf("What type does the file have?\n1-Text\n2-Bin\n");
			rewind(stdin);
			while (1) {
				rewind(stdin);
				if (!scanf("%c", &c) || c != '1' && c != '2')
					printf("Sth went wrong!Please please, try again\n"); else break;
			}
			system("CLS");
			if (c == '1')
				TextUpload(&list);
			else
				UploadBin(&list);


			break;
		case 8:
			system("CLS");
			is_empty(list);
			return 0;
			break;
		default:
			system("CLS");
			printf("Wrong number!Please try again\n");
			Sleep(1000);
			system("CLS");
		}
	}
	return 0;
}
