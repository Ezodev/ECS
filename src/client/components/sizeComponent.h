#pragma once
#include "core/component.h"
#include <SFML/System.hpp>

COMPONENT(SizeComponent) {
	SizeComponent(Entity owner, ComponentHandle handle) :
		Component(owner, handle) {}

	void init(ArgsMap args) {
		width = boost::lexical_cast<float>(args["width"]);
		height = boost::lexical_cast<float>(args["height"]);
	}

	float width = 0.f;
	float height = 0.f;
};

