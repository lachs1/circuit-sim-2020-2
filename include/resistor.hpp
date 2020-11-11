#pragma once

#include <complex>

#include "component.hpp"


class Resistor: public Component {
    public:
        Resistor(const std::string& name,
                float resistance = 0,
                std::shared_ptr<Node> input = nullptr,
                std::shared_ptr<Node> output = nullptr);

        float GetValue() const;

        float GetAdmittance() const;

        ComponentType GetType() const;

    private:
        float resistance_;  // ohms
};