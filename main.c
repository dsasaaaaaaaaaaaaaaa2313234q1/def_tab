#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <string.h> // Добавил только для работы со строками (strcmp)

int main() {
	char get;
	char der[100] = "programic,game,fact";
	char search[100];
	char error[1000] = "error1:invalid syntaxsys";

	printf("hello this 0.1 reale \n");
	Sleep(2000);
	printf("get tab ? : (Y/N)\n");

	scanf(" %c", &get); // Пробел перед %c, чтобы не съедало Enter

	if (get == 'Y') {
		printf("%s\n", der); // Для вывода строки нужен %s
		printf("search : \n");

		scanf("%s", search); // Для ввода строки нужен %s и БЕЗ амперсанда

		// Для сравнения строк в C используется strcmp
		if (strcmp(search, "programic") == 0) {
			printf("Programming is the process of creating sequences of instructions, known as programs, that tell computers how to perform tasks. It involves designing algorithms and writing code in a programming language to solve problems. Essentially, programming is giving machines a set of precise instructions to carry out specific operations.\n ");
		}
		else if (strcmp(search, "game") == 0) { // else if, чтобы не срабатывал error
			printf("Games are structured forms of play, often competitive or recreational, with rules that define how participants interact and how winning is determined. They can take many forms, including board games, video games, sports, and more. popular game this - minecraft,cs2,tf2\n");
		}
		else if (strcmp(search, "fact") == 0) { // else if, чтобы не срабатывал error
			printf("1.The Earth is round\n");
			Sleep(2000);
			printf("2.The sun is a star\n");
			Sleep(2000);
			printf("The Statue of Liberty was a gift from France\n");
		}
		else {
			printf("%s\n", error); // Вывод строки через %s
		}
	}
	else {
		printf("ok, you exit goodbay :3");
		return 0;
	}

	return 0; // В самом конце main
}