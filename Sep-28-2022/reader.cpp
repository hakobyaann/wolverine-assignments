#include <iostream>
#include <fstream>

void reader();

int main()
{
    reader();
return 0; 
}
void reader()
{
    std::ifstream inFile("file.txt");
    std::ofstream outFile("result.txt");
    std::string line = "";
    if (inFile.fail())
    {
        std::cout << "Error while openning the file!" << std::endl;
        exit(1);
    }
    else
    {
        while (!inFile.eof())
        {
           inFile >> line;
           if (!line.empty()) 
           {
                size_t check = line.find(',');
                if (check < line.size())
                {
                    line.erase(line.begin() + check);
                    outFile << line << std::endl;
                }
                else
                {
                    outFile << line << std::endl;
                }
           }
           else
           {
                std::cout << "The result file is not empty!" << std::endl;
           }
        }
    }
}
