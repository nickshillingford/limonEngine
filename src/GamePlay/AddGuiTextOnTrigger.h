//
// Created by engin on 26.05.2018.
//

#ifndef LIMONENGINE_REMOVEGUITEXTONTRIGGER_H
#define LIMONENGINE_REMOVEGUITEXTONTRIGGER_H


#include "TriggerInterface.h"

class AddGuiTextOnTrigger: public TriggerInterface {
    static TriggerRegister<AddGuiTextOnTrigger> reg;
    std::vector<LimonAPI::ParameterRequest> result;
public:
    std::vector<LimonAPI::ParameterRequest> getParameters() override;

    bool run(std::vector<LimonAPI::ParameterRequest> parameters) override;


    std::vector<LimonAPI::ParameterRequest> getResults() override;

    std::string getName() override {
        return "AddGuiTextOnTrigger";
    }
};

#endif //LIMONENGINE_REMOVEGUITEXTONTRIGGER_H