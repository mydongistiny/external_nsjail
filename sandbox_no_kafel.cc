/*

   nsjail - seccomp-bpf sandboxing
   -----------------------------------------

   Copyright 2014 Google Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#include "sandbox.h"

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include "logs.h"

namespace sandbox {

bool applyPolicy(nsjconf_t* nsjconf) {
	if (nsjconf->kafel_file_path.empty() && nsjconf->kafel_string.empty()) {
		return true;
	}

	PLOG_E("kafel support not included");
	return false;
}

bool preparePolicy(nsjconf_t* nsjconf) {
	if (nsjconf->kafel_file_path.empty() && nsjconf->kafel_string.empty()) {
		return true;
	}

	PLOG_E("kafel support not included");
	return false;
}

void closePolicy(nsjconf_t* nsjconf) {}

}  // namespace sandbox
