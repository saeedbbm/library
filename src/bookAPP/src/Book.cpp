
#include "Book.h"

Book::Book(std::string title, std::string author)
	: title(title), author(author)
{

}

void Book::printBook()
{
	std::cout << title << " " << author;
}