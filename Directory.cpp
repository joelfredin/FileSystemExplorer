#include"Directory.h"
#include"File.h"
#include<memory>

void Directory::addSubdirectory(std::unique_ptr<Directory> directory)
{
    sub_directories.push_back(std::move(directory));
}

void Directory::addFile(std::unique_ptr<File> file)
{
    files.push_back(std::move(file));
}

