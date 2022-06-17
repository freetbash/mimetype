#ifndef __HTTP__MIMETYPE
#define __HTTP__MIMETYPE
#include <map>
#include <string>
class MimeType{
private:
    std::map<std::string,std::string> data;
public:
    std::string find(std::string suffix);
    MimeType();
};
#endif