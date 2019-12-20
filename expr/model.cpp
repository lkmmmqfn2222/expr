#include "model.h"

model::model()
{
   model::numb1 = 0;
   model::numb2 = 0;
}

QString model::doExpr(){
    int result = 0;
    if(this->flag == "+"){
        result = this->numb1 + this->numb2;
    }
    else if(this->flag == "-"){
        result = this->numb1 - this->numb2;
    }
    else if(this->flag == "*"){
        result = this->numb1 * this->numb2;
    }
    else if(this->flag == "/"){
        if(this->numb2 == 0){
            return "error";
        }
        else{
            result = this->numb1 / this->numb2;
        }
    }
    return QString::number(result,10);
}
