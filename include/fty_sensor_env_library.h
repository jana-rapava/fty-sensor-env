/*  =========================================================================
    fty-sensor-env - generated layer of public API

    Copyright (C) 2014 - 2015 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_SENSOR_ENV_LIBRARY_H_INCLUDED
#define FTY_SENSOR_ENV_LIBRARY_H_INCLUDED

//  Set up environment for the application

//  External dependencies
#include <czmq.h>
#include <malamute.h>
#include <ftyproto.h>

//  FTY_SENSOR_ENV version macros for compile-time API detection
#define FTY_SENSOR_ENV_VERSION_MAJOR 0
#define FTY_SENSOR_ENV_VERSION_MINOR 0
#define FTY_SENSOR_ENV_VERSION_PATCH 0

#define FTY_SENSOR_ENV_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define FTY_SENSOR_ENV_VERSION \
    FTY_SENSOR_ENV_MAKE_VERSION(FTY_SENSOR_ENV_VERSION_MAJOR, FTY_SENSOR_ENV_VERSION_MINOR, FTY_SENSOR_ENV_VERSION_PATCH)

#if defined (__WINDOWS__)
#   if defined FTY_SENSOR_ENV_STATIC
#       define FTY_SENSOR_ENV_EXPORT
#   elif defined FTY_SENSOR_ENV_INTERNAL_BUILD
#       if defined DLL_EXPORT
#           define FTY_SENSOR_ENV_EXPORT __declspec(dllexport)
#       else
#           define FTY_SENSOR_ENV_EXPORT
#       endif
#   elif defined FTY_SENSOR_ENV_EXPORTS
#       define FTY_SENSOR_ENV_EXPORT __declspec(dllexport)
#   else
#       define FTY_SENSOR_ENV_EXPORT __declspec(dllimport)
#   endif
#   define FTY_SENSOR_ENV_PRIVATE
#else
#   define FTY_SENSOR_ENV_EXPORT
#   if (defined __GNUC__ && __GNUC__ >= 4) || defined __INTEL_COMPILER
#       define FTY_SENSOR_ENV_PRIVATE __attribute__ ((visibility ("hidden")))
#   else
#       define FTY_SENSOR_ENV_PRIVATE
#   endif
#endif

//  Project has no stable classes, so we build the draft API
#undef  FTY_SENSOR_ENV_BUILD_DRAFT_API
#define FTY_SENSOR_ENV_BUILD_DRAFT_API

//  Opaque class structures to allow forward references
//  These classes are stable or legacy and built in all releases
//  Draft classes are by default not built in stable releases
#ifdef FTY_SENSOR_ENV_BUILD_DRAFT_API
typedef struct _libth_t libth_t;
#define LIBTH_T_DEFINED
#endif // FTY_SENSOR_ENV_BUILD_DRAFT_API


//  Public classes, each with its own header file
#ifdef FTY_SENSOR_ENV_BUILD_DRAFT_API
#include "libth.h"
#endif // FTY_SENSOR_ENV_BUILD_DRAFT_API

#endif
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
