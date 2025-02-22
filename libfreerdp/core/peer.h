/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * RDP Server Peer
 *
 * Copyright 2011 Vic Lee
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_LIB_CORE_PEER_H
#define FREERDP_LIB_CORE_PEER_H

#include "rdp.h"
#include "mcs.h"
#include "server.h"

#include <freerdp/peer.h>

FREERDP_LOCAL int rdp_peer_handle_state_demand_active(freerdp_peer* client);

#endif /* FREERDP_LIB_CORE_PEER_H */
