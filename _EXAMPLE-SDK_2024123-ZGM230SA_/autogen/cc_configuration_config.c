/*******************************************************************************
 * @file
 * Command Class Configuration Parameter
 * @remarks This file is auto generated
 * @copyright 2022 Silicon Laboratories Inc.
 *******************************************************************************
 * # License
 * <b>Copyright 2022 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
// -----------------------------------------------------------------------------
//                   Includes
// -----------------------------------------------------------------------------
#include <string.h>
#include <stdbool.h>
#include <ZW_typedefs.h>
#include <SizeOf.h>
#include <ZAF_file_ids.h>
#include <CC_Configuration.h>
#include <cc_configuration_config_api.h>

// -----------------------------------------------------------------------------
//                Macros and Typedefs
// -----------------------------------------------------------------------------
#define ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(x) (ZAF_FILE_ID_CC_CONFIGURATION_BASE + x)

// -----------------------------------------------------------------------------
//                Static Variables
// -----------------------------------------------------------------------------

/*
 * This array must be sorted by "number". The Z-Wave Command Class Configurator (Z3C) will sort
 * the array, but if modified manually after generation, make sure to keep it sorted by "number".
 */
static const cc_config_parameter_metadata_t parameter_pool[] = {
  {
    .number            = 1,
    .next_number       = 17,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(0),
    .migration_handler = NULL,

    .attributes = {
      .name = "SW1 Switch type",
      .info = "0 push, 1 toggle state, 2 toggle change",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_8_BIT,
      .min_value.as_uint8 = 0,
      .max_value.as_uint8 = 2,
      .default_value.as_uint8 = 2,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 0,
    },
  },
  {
    .number            = 17,
    .next_number       = 19,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(1),
    .migration_handler = NULL,

    .attributes = {
      .name = "Restore state of O1 after power failure",
      .info = "0 restore, 1 no restore",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_8_BIT,
      .min_value.as_uint8 = 0,
      .max_value.as_uint8 = 1,
      .default_value.as_uint8 = 0,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 0,
    },
  },
  {
    .number            = 19,
    .next_number       = 20,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(2),
    .migration_handler = NULL,

    .attributes = {
      .name = "Turn O1 OFF Automatically with timer",
      .info = "0 - 32535, 0 disabled",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_16_BIT,
      .min_value.as_uint16 = 0,
      .max_value.as_uint16 = 32535,
      .default_value.as_uint16 = 0,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 0,
    },
  },
  {
    .number            = 20,
    .next_number       = 23,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(3),
    .migration_handler = NULL,

    .attributes = {
      .name = "Turn O1 ON Automatically with timer",
      .info = "0 - 32535, 0 disabled",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_16_BIT,
      .min_value.as_uint16 = 0,
      .max_value.as_uint16 = 32535,
      .default_value.as_uint16 = 0,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 0,
    },
  },
  {
    .number            = 23,
    .next_number       = 25,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(4),
    .migration_handler = NULL,

    .attributes = {
      .name = "O1 NO/NC",
      .info = "0 NO, 1 NC",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_8_BIT,
      .min_value.as_uint8 = 0,
      .max_value.as_uint8 = 1,
      .default_value.as_uint8 = 0,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 0,
    },
  },
  {
    .number            = 25,
    .next_number       = 120,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(5),
    .migration_handler = NULL,

    .attributes = {
      .name = "Set timer units to Seconds or Milliseconds for O1",
      .info = "0 seconds, 1 milliseconds",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_8_BIT,
      .min_value.as_uint8 = 0,
      .max_value.as_uint8 = 1,
      .default_value.as_uint8 = 0,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 0,
    },
  },
  {
    .number            = 120,
    .next_number       = 201,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(6),
    .migration_handler = NULL,

    .attributes = {
      .name = "Factory reset",
      .info = "Factory reset",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_8_BIT,
      .min_value.as_uint8 = 0,
      .max_value.as_uint8 = 1,
      .default_value.as_uint8 = 0,
      .flags.read_only = 0,
      .flags.altering_capabilities = 0,
      .flags.advanced = 1,
    },
  },
  {
    .number            = 201,
    .next_number       = 202,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(7),
    .migration_handler = NULL,

    .attributes = {
      .name = "Serial Number 1",
      .info = "Serial Number 1",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_32_BIT,
      .min_value.as_uint32 = 0,
      .max_value.as_uint32 = 2147483647,
      .default_value.as_uint32 = 2147483647,
      .flags.read_only = 1,
      .flags.altering_capabilities = 0,
      .flags.advanced = 1,
    },
  },
  {
    .number            = 202,
    .next_number       = 203,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(8),
    .migration_handler = NULL,

    .attributes = {
      .name = "Serial Number 2",
      .info = "Serial Number 2",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_32_BIT,
      .min_value.as_uint32 = 0,
      .max_value.as_uint32 = 2147483647,
      .default_value.as_uint32 = 2147483647,
      .flags.read_only = 1,
      .flags.altering_capabilities = 0,
      .flags.advanced = 1,
    },
  },
  {
    .number            = 203,
    .next_number       = 0,
    .file_id           = ZAF_FILE_ID_CC_CONFIGURATION_WITH_OFFSET(9),
    .migration_handler = NULL,

    .attributes = {
      .name = "Serial Number 3",
      .info = "Serial Number 3",
      .format = CC_CONFIG_PARAMETER_FORMAT_UNSIGNED_INTEGER,
      .size = CC_CONFIG_PARAMETER_SIZE_32_BIT,
      .min_value.as_uint32 = 0,
      .max_value.as_uint32 = 2147483647,
      .default_value.as_uint32 = 2147483647,
      .flags.read_only = 1,
      .flags.altering_capabilities = 0,
      .flags.advanced = 1,
    },
  },
};

static const cc_configuration_t default_configuration = {
  .numberOfParameters = sizeof_array(parameter_pool),
  .parameters         = parameter_pool
};

// -----------------------------------------------------------------------------
//              Public Function Definitions
// -----------------------------------------------------------------------------

cc_configuration_t const*
cc_configuration_get_configuration(void)
{
  return &default_configuration;
}
// -----------------------------------------------------------------------------
//              Static Function Definitions
// -----------------------------------------------------------------------------
