#pragma once

#ifndef LIVE_HPP
#define LIVE_HPP
#include <string>

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef BUILD
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

    std::string API getHardDiskSerial();

#ifdef __cplusplus
}
#endif
#endif
