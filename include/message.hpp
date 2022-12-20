#pragma once

class message
{
private:
    string text;
public:
    message(string text);
    ~message();
    void showMessage();
};

