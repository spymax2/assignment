/*
PROGRm to define and initialize struct statement
author:vibert
reg no:CT101/G/22151/24

*/
# include <stdio.h>
# include <string.h>
// declare the struct statement
struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
}  
book1;
int main(){
	//initialize the struct statement
	strcpy(book1.title,"introduction to c programming");
	strcpy(book1.author,"willy smith");
	book1.publication_year=2022;
	strcpy(book1.ISBN,"9780131103627");
	book1.price=49.99;
	// print out the results
	printf("the title is:%s\n",book1.title);
	printf("the author is:%s\n",book1.author);
	printf("the publication_year is:%d\n",book1.publication_year);
	printf("the ISBN is:%s\n",book1.ISBN);
	printf("the price is:%f\n",book1.price);
	
	return 0;
}
