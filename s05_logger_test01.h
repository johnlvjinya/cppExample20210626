#pragma once

//https://github.com/gabime/spdlog

#include<iostream>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
using namespace std;

void s05_basic_logfile_example()
{
    try
    {
        auto logger = spdlog::basic_logger_mt("basic_logger", "output/s05_basic-log.txt");
        spdlog::info("Welcome to spdlog!");
        spdlog::error("Some error message with arg: {}", 1);

 

    }
    catch (const spdlog::spdlog_ex& ex)
    {
        std::cout << "Log init failed: " << ex.what() << std::endl;
    }
}