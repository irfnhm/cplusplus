#include <iostream>
#include <iterator>
#include <vector>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>

namespace fs = boost::filesystem;
void read_dir(int argc, char *argv[]){
    fs::path p(argc > 1 ? argv[1] : ".");
    std::vector<fs::directory_entry> v;

    // Read the directory
    if(is_directory(p)){
        copy(fs::directory_iterator(p), fs::directory_iterator(), back_inserter(v));
        std::cout << p << " contains:\n";
        for(const auto &t : v){
            std::cout << (t).path().string() << std::endl;
        } 
    }
}

// Create a directory
void create_dir(){
    const auto dirName = "TempDir";
    fs::path pp{dirName};
    try
    {
        if(create_directory(pp)){
            rename(pp, dirName);
        }
    }
    catch(fs::filesystem_error &e){
        std::__1::cerr << e.what() << "\n";
    }
}

// Create a file and send a string to the file
void write_file(){
    fs::path fpath{"temp.txt"};
    fs::ofstream ofs{fpath};
    ofs << "Hi there\n";
}

int main(int argc, char *argv[]){
    read_dir(argc, argv);
    create_dir();
    write_file();
}
