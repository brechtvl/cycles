/* SPDX-FileCopyrightText: 2011-2022 Blender Foundation
 *
 * SPDX-License-Identifier: Apache-2.0 */

#pragma once

CCL_NAMESPACE_BEGIN

class Device;
class DeviceInfo;
class Profiler;
class Stats;

Device *device_multi_create(const DeviceInfo &info,
                            Stats &stats,
                            Profiler &profiler,
                            bool headless);

CCL_NAMESPACE_END
