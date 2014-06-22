#pragma once
#include "tool/logger.h"
#include "tool/profiler.h"
#include "tool/config.h"
#include "componentContainer.h"
#include "taskManager.h"
#include "eventQueue.h"

using TaskHandle = unsigned int;

class Engine {
public:
    Engine();


    bool init();
    void run();
    void stop();

    Logger logger;
    Profiler profiler;
    Configuration config;

    ComponentContainer components;
    TaskManager tasks;
    EventQueue events;

private:
    bool quit = false;
	void initLoggers(const std::string& filename, bool appendTimestamps);
};
