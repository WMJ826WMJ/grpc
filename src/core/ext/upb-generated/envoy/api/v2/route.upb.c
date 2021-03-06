/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/route.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "envoy/api/v2/core/config_source.upb.h"
#include "envoy/api/v2/route/route_components.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/status.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_RouteConfiguration_submsgs[5] = {
  &envoy_api_v2_Vhds_msginit,
  &envoy_api_v2_core_HeaderValueOption_msginit,
  &envoy_api_v2_route_VirtualHost_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_api_v2_RouteConfiguration__fields[10] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(20, 40), 0, 2, 11, 3},
  {3, UPB_SIZE(24, 48), 0, 0, 9, 3},
  {4, UPB_SIZE(28, 56), 0, 1, 11, 3},
  {5, UPB_SIZE(32, 64), 0, 0, 9, 3},
  {6, UPB_SIZE(36, 72), 0, 1, 11, 3},
  {7, UPB_SIZE(12, 24), 0, 3, 11, 1},
  {8, UPB_SIZE(40, 80), 0, 0, 9, 3},
  {9, UPB_SIZE(16, 32), 0, 0, 11, 1},
  {10, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_RouteConfiguration_msginit = {
  &envoy_api_v2_RouteConfiguration_submsgs[0],
  &envoy_api_v2_RouteConfiguration__fields[0],
  UPB_SIZE(48, 96), 10, false,
};

static const upb_msglayout *const envoy_api_v2_Vhds_submsgs[1] = {
  &envoy_api_v2_core_ConfigSource_msginit,
};

static const upb_msglayout_field envoy_api_v2_Vhds__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Vhds_msginit = {
  &envoy_api_v2_Vhds_submsgs[0],
  &envoy_api_v2_Vhds__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

#include "upb/port_undef.inc"

