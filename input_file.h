#ifndef INPUT_FILE_H
#define INPUT_FILE_H


#include <string>
#include <map>
#include "water_reading.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <QString>

class input_file{
private:
    input_file();
public:
    static bool read_file(std::map<std::__1::string, std::vector<water_reading *> > &reading_map, std::string path);
    static bool fill_in (const std::string &line, std::map<std::__1::string, std::vector<water_reading *> > &reading_map);
};

#endif // INPUT_FILE_H
