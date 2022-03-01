#include <iostream>
//#include <stdio>
//#include <stdlib>
#include <iomanip>

struct COURSE_WORK {
    char name[20];
    char topic[20];
    char author[20];
    char pages[20];
};

int length = 1;

int func1(struct COURSE_WORK *course_work ){
    std::cout << setiosflags(std::ios::left);
    std::cout << "|" <<std::setw(10) <<"name"  << "|" << std::setw(10) << "topic"  << "|"<< std::setw(10)  << "author" << "|" << std::setw(10) << "pages" << "|\n";
    for(int i = 0; i < 5; i++){
        switch (i) {
            case 0:
                std::cout << "|" << std::setw(10) << course_work->name << "|";
                break;
            case 1:
                std::cout << std::setw(10) << course_work->topic << "|";
                break;
            case 2:
                std::cout << std::setw(10) << course_work->author << "|";
                break;
            case 3:
                std::cout << std::setw(10) << course_work->pages << "|";
                break;
            default:
                //std::cout << "\n Complete \n";
                break;
        }
    }
    std::cout << "\n";
    return 0;
}

int func(struct COURSE_WORK *course_work ){
    for(int i = 0; i < 5; i++){
        switch (i) {
            case 0:
                std::cout << "\n name: ";
                std::cout << course_work->name;
                break;
            case 1:
                std::cout << "\n topic: ";
                std::cout << course_work->topic;
                break;
            case 2:
                std::cout << "\n author: ";
                std::cout << course_work->author;
                break;
            case 3:
                std::cout << "\n Pages: ";
                std::cout << course_work->pages << "\n";
                break;
            default:
                break;
        }
    }
    return 0;
}

COURSE_WORK *create(COURSE_WORK *course_work){
    std::cout << "Input name: ";
    std::cin >> course_work->name;
    std::cout << "\n Input topic: ";
    std::cin >> course_work->topic;
    std::cout << "\n Input author: ";
    std::cin >> course_work->author;
    std::cout << "\n Input pages: ";
    std::cin >> course_work->pages;

    return course_work;
}

int main() {

    COURSE_WORK* course_work = new COURSE_WORK[100];
    int i = 0;

    while( i != -1 ){
        std::cout << " 1 - Create new object \n 2 - table output \n 3 - string output \n ( -1 ) - exit \n";
        std::cin >> i;
        if( i == 1){
            course_work[length] = *create(course_work);
            //std::cout << length;
            length++;
        } else if (i == 2){
            std::cout << "Choose a element of array \n";
            int index;
            std::cin >> index;

            if(index > length || index < 0){
                std::cout << "Incorrect number \n";
            } else {
                func(&course_work[index]);
            }
        }else if (i == 3){
            std::cout << "Choose a element of array \n";
            int index;
            std::cin >> index;

            if(index > length || index < 0){
                std::cout << "Incorrect number \n";
            } else {
                func1(&course_work[index]);
            }
        }else if (i == -1){
            break;
        }
    }
    delete[](course_work);
}
