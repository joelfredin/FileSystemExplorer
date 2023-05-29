#pragma once
#include"File.h"
#include<string>
#include<vector>
#include<memory>

class Directory
{
private:
    std::string directory_name;
    std::vector<std::unique_ptr<Directory>> sub_directories;
    std::vector<std::unique_ptr<File>> files;
public:
    void addSubdirectory(std::unique_ptr<Directory> directory);
    void addFile(std::unique_ptr<File> file);
    void displayDirectoryContent();
    void navigateToSubdirectory(std::unique_ptr<Directory> directory);
};