#include <iostream>

int main(int argc, char *argv[]){
    if(argc == 1){
        std::cout << "Please input numbers to find average.";
        return 0;
    }

    double sum = 0;
    for(int i = 1; i < argc; i++){
        sum += atof(argv[i]);
    }
    std::cout << "---------------------------------\n";
    std::cout << "Average of "<<argc-1<<" numbers = " << sum / (argc - 1);
    std::cout << "\n---------------------------------";
}

