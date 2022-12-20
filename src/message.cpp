#include "..\include\message.hpp"
message::message(string text){
    this-> text = text;
}
message::~message(){

}
void message::showMessage(){
    cout<< message.text;
}