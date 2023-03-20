#pragma once
#include <string>

class chalk
{
public:
    chalk blue(std::string word)
    {
        buffer += "\x1b[34m" + word;
        return *this;
    }
    chalk red(std::string word)
    {
        buffer += "\x1b[31m" + word;
        return *this;
    }
    chalk green(std::string word)
    {
        buffer += "\x1b[32m" + word;
        return *this;
    }

    chalk bold(std::string word)
    {
        buffer += "\x1b[1m" + word;
        return *this;
    }
    chalk italic(std::string word)
    {
        buffer += "\x1b[3m" + word;
        return *this;
    }
    chalk blue()
    {
        buffer += "\x1b[34m";
        return *this;
    }
    chalk red()
    {
        buffer += "\x1b[31m";
        return *this;
    }
    chalk green()
    {
        buffer += "\x1b[32m";
        return *this;
    }

    chalk bold()
    {
        buffer += "\x1b[1m";
        return *this;
    }

    chalk italic()
    {
        buffer += "\x1b[3m";
        return *this;
    }
    std::string get()
    {
        std::string result = buffer + "\x1b[0m";
        buffer = "";
        return result;
    }

private:
    std::string buffer;
};