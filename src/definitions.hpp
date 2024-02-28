#pragma once
#include <string>

#define PLUGIN_API_VERSION 26

/*-------------------------- CHANGE THESE --------------------------*/

// this needs to be unique for each plugin
#define CONFIG_FILE "qtexample.ini"

#define PLUGIN_NAME "Expanded Administration"
#define PLUGIN_AUTHOR "PhysicsGaunt"
#define PLUGIN_DESCRIPTION "A TS3 plugin for expanded administration."

/*-------------------------- INTERNAL DEFINITIONS --------------------------*/
// don't change this, it is replaced by the build script
#define PLUGIN_VERSION "<version>"

#define PATH_BUFSIZE 512
#define COMMAND_BUFSIZE 128
#define INFODATA_BUFSIZE 128
#define SERVERINFO_BUFSIZE 256
#define CHANNELINFO_BUFSIZE 512
#define RETURNCODE_BUFSIZE 128
