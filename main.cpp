#include<iostream>
#include"Directory.h"
#include<memory>

int main()
{
    std::unique_ptr<File> file1 = std::make_unique<File>("Executable.exe");
    Directory direct;
    std::unique_ptr<Directory> direct2 = std::make_unique<Directory>();

    direct.addSubdirectory(std::move(direct2));
    direct.addFile(std::move(file1));

    return 0;
}