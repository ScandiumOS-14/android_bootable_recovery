/*
 * Copyright (C) 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <functional>

#include "recovery_ui/device.h"
#include "recovery_ui/ui.h"

struct selabel_handle;

// Returns true on success.
bool WipeCache(RecoveryUI* ui, const std::function<bool()>& confirm,
               std::string_view new_fstype = "");

// Returns true on success.
bool WipeData(Device* device, bool keep_memtag_mode = false,std::string_view new_fstype = "");

// Returns true on success.
bool WipeSystem(RecoveryUI* ui, const std::function<bool()>& confirm,
                std::string_view new_fstype = "");
