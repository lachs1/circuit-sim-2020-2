#pragma once

#include <SFML/Graphics/VertexArray.hpp>

#include "gui_components/gui_component.hpp"

#include "circuit.hpp"


class GUIWire : public sf::VertexArray {
    public:
        GUIWire(Circuit &circuit);

        ~GUIWire();

        void SetNodeType(NodeType type);

        const NodeType GetNodeType() const;

        void SetNode(std::shared_ptr<Node> node);

        const std::shared_ptr<Node> GetNode() const;

        void ConnectComponent(std::shared_ptr<GUIComponent> comp, TerminalType type);

        std::map<TerminalType, std::vector<std::shared_ptr<GUIComponent>>> GetComponents();

    private:
        std::shared_ptr<Node> node_ = nullptr;
        std::map<TerminalType, std::vector<std::shared_ptr<GUIComponent>>> components_;
        Circuit &circuit_;
};