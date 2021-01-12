#ifndef _CSYNTH_PLATFORM_H
#define _CSYNTH_PLATFORM_H

#include "core.h"

// ====================================== device

// devices

#define devices_foreach list_foreach

Devices* get_all_devices();
void free_devices(Devices*);

// device
struct Device* get_default_output_device();
void free_device(struct Device*);
const char* get_device_name(struct Device*);

// ====================================== configs
StreamConfigRanges* get_supported_output_configs(struct Device*);
void free_configs(StreamConfigRanges*);
// default_output_config

// ====================================== stream
// build_output_stream
// pause
// play

#endif
