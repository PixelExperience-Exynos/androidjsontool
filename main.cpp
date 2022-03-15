#include <iostream>
#include <vector>
#include <fstream>

int _get_data();
std::string _file_names ();
int _date_time ();
int _size();
std::string _file_hash ();
std::string _id ();

std::ifstream romsFile;

std::string rom_name;
std::vector<std::string> roms;
int roms_length = 0;

int main() {
    system("mkdir tmp");
    std::string filename = _file_names();

    system("rm -rf tmp");
    return 0;
}

std::string _file_names () {
    std::string fn;
    system("ls *.zip >> tmp/roms.txt");
    romsFile.open("tmp/roms.txt");
    while (!romsFile.eof()) {
        roms_length += 1;
        std::cout << romsFile.rdbuf();
    }
    return fn;
}

int _date_time () {
}

int size () {
}

std::string _file_hash () {

}

std::string _id () {

}
