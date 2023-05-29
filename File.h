#pragma once
#include<string>

class File
{
private:
    std::string file_name;
    int size;
    std::string file_type;
    //bool encrypted;
public:
    File(std::string name) : file_name(name){}

};