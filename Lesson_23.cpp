//#include <iostream>
//
//class Book {
//private:
//    char* title = nullptr;
//    char* author = nullptr;
//    int pages;
//public:
//    Book(const char* title, const char* author, int pages)
//    : pages(pages){
//        int titleSize = strlen(title) + 1;
//        int authorSize = strlen(author) + 1;
//
//        this->author = new char[strlen(author) + 1];
//        strcpy_s(this->author, authorSize, author);
//
//        this->title = new char[strlen(title) + 1];
//        strcpy_s(this->title, titleSize, title);
//    }
//    Book(const Book& other) {
//        title = new char[strlen(other.title) + 1];
//        strcpy_s(title, strlen(other.title) + 1, other.title);
//
//        author = new char[strlen(other.author) + 1];
//        strcpy_s(author, strlen(other.author) + 1, other.author);
//       
//        this->pages = other.pages;
//    }
//
//    const char* GetTitle() const { return title; }
//    const char* GetAuthor() const { return author; }
//    int GetPages() const { return pages; }
//
//    void SetTitle(const char* newTitle) {
//        if (title != nullptr) delete[] title;
//        title = new char[strlen(newTitle) + 1];
//        strcpy_s(title, strlen(newTitle) + 1, newTitle);
//    }
//    void SetAuthor(const char* newauthor) {
//        if (author != nullptr) delete[] author;
//        author = new char[strlen(newauthor) + 1];
//        strcpy_s(author, strlen(newauthor) + 1, newauthor);
//    }
//    void SetPages(int newPages) {
//        pages = newPages;
//    }
//
//    ~Book() {
//        if (title != nullptr) delete[] title;
//        if (author != nullptr) delete[] author;
//    }
//
//    void PrintBook(Book& book) {
//        std::cout << "Title: " << book.GetTitle() << " by " << book.GetAuthor() << '\n';
//    }
//};
//
//int main()
//{
//    Book book = Book("Kobzar", "Taras Shevchenko", 260);
//    Book book2 = book;
//    //PrintBook(book);
//}
