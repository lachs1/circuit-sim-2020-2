#include "ac_voltage_source.hpp"

ACVoltageSource::ACVoltageSource(
        const std::string& name,
        float voltage,
        std::shared_ptr<Node> input,
        std::shared_ptr<Node> output
    ) : ActiveComponent(name, input, output), voltage_(voltage) { }

float ACVoltageSource::GetValue() const {
    return voltage_;
}

void ACVoltageSource::SetValue(float newval) {
    voltage_ = newval;
}

ComponentType ACVoltageSource::GetType() const {
    return AC_VOLTAGE_SOURCE;
}