/**
 * @file
 * Command Class Association Group Information
 * @remarks This file is auto generated
 * @copyright 2022 Silicon Laboratories Inc.
 */

#include <cc_agi_config_api.h>
#include <SizeOf.h>

static const char GROUP_NAME_ENDPOINT_1_GROUP_2[] = "dummy";
static const ccc_pair_t COMMANDS_ENDPOINT_1_GROUP_2[] = {
  {
    .cmdClass = COMMAND_CLASS_BASIC_V2,
    .cmd = BASIC_SET_V2
  },
};

static const cc_agi_group_t ROOT_DEVICE_GROUPS[] =
{
  {
    .name = GROUP_NAME_ENDPOINT_1_GROUP_2,
    .name_length = sizeof(GROUP_NAME_ENDPOINT_1_GROUP_2),
    .profile = {
      .profile_MS = ASSOCIATION_GROUP_INFO_REPORT_AGI_PROFILE_CONTROL,
      .profile_LS = ASSOCIATION_GROUP_INFO_REPORT_AGI_CONTROL_KEY01
    },
    .ccc_pairs = COMMANDS_ENDPOINT_1_GROUP_2,
    .ccc_pair_count = sizeof_array(COMMANDS_ENDPOINT_1_GROUP_2),
  },
};

static const cc_agi_config_t config[] = {
  {
    .groups = ROOT_DEVICE_GROUPS,
    .group_count = sizeof_array(ROOT_DEVICE_GROUPS)
  },
};

const cc_agi_config_t * cc_agi_get_config(void)
{
  return config;
}

uint8_t cc_agi_config_get_group_count_by_endpoint(uint8_t endpoint)
{
  if (endpoint > sizeof_array(config)) {
    return 0;
  }
  return config[endpoint].group_count;
}

const cc_agi_group_t * cc_agi_get_rootdevice_groups(void)
{
  return ROOT_DEVICE_GROUPS;
}
