# This file is part of the "Learn WebGPU for C++" book.
#   https://eliemichel.github.io/LearnWebGPU
# 
# MIT License
# Copyright (c) 2022-2024 Elie Michel and the wgpu-native authors
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

include(FetchContent)

set(WEBGPU_BACKEND "WGPU" CACHE STRING "Backend implementation of WebGPU. Possible values are EMSCRIPTEN, WGPU, WGPU_STATIC and DAWN (it does not matter when using emcmake)")
set_property(CACHE WEBGPU_BACKEND PROPERTY STRINGS EMSCRIPTEN WGPU WGPU_STATIC DAWN DAWN_PRECOMPILED)

# FetchContent's GIT_SHALLOW option is buggy and does not actually do a shallow
# clone. This macro takes care of it.
macro(FetchContent_DeclareShallowGit Name GIT_REPOSITORY GitRepository GIT_TAG GitTag)
	FetchContent_Declare(
		"${Name}"

		# This is what it'd look line if GIT_SHALLOW was indeed working:
		#GIT_REPOSITORY "${GitRepository}"
		#GIT_TAG        "${GitTag}"
		#GIT_SHALLOW    ON

		# Manual download mode instead:
		DOWNLOAD_COMMAND
			cd "${FETCHCONTENT_BASE_DIR}/${Name}-src" &&
			git init &&
			git fetch --depth=1 "${GitRepository}" "${GitTag}" &&
			git reset --hard FETCH_HEAD
	)
endmacro()

if (NOT TARGET webgpu)
	string(TOUPPER ${WEBGPU_BACKEND} WEBGPU_BACKEND_U)

	if (EMSCRIPTEN OR WEBGPU_BACKEND_U STREQUAL "EMSCRIPTEN")

		FetchContent_DeclareShallowGit(
			webgpu-backend-emscripten
			GIT_REPOSITORY https://github.com/PJayB/WebGPU-distribution
			GIT_TAG        5a405c12697d624220ffdfee2df37558df282e6b # emscripten-v3.1.61 + fix
		)
		FetchContent_MakeAvailable(webgpu-backend-emscripten)

	elseif (WEBGPU_BACKEND_U STREQUAL "WGPU")

		FetchContent_DeclareShallowGit(
			webgpu-backend-wgpu
			GIT_REPOSITORY https://github.com/PJayB/WebGPU-distribution
			GIT_TAG        47c84c4f95c34dfc254565df4b22dc21e45dfde6 # wgpu-v0.19.4.1 + fix
		)
		FetchContent_MakeAvailable(webgpu-backend-wgpu)

	elseif (WEBGPU_BACKEND_U STREQUAL "WGPU_STATIC")

		FetchContent_DeclareShallowGit(
			webgpu-backend-wgpu-static
			GIT_REPOSITORY https://github.com/PJayB/WebGPU-distribution
			GIT_TAG        a399c78c367c4e05d6d10f25efe67162bfb1a190 # wgpu-static-v0.19.4.1 + fix
		)
		FetchContent_MakeAvailable(webgpu-backend-wgpu-static)

	elseif (WEBGPU_BACKEND_U STREQUAL "DAWN")

		FetchContent_DeclareShallowGit(
			webgpu-backend-dawn
			GIT_REPOSITORY https://github.com/eliemichel/WebGPU-distribution
			GIT_TAG        50a5be486cd97fda8cd98693bf2561d4d4f86597 # dawn-6536 + fix
		)
		FetchContent_MakeAvailable(webgpu-backend-dawn)

		elseif (WEBGPU_BACKEND_U STREQUAL "DAWN_PRECOMPILED")

			FetchContent_DeclareShallowGit(
				webgpu-backend-dawn-precompiled
				GIT_REPOSITORY https://github.com/PJayB/WebGPU-distribution
				GIT_TAG        b544b5c79395a0da85481f6e079603f7dece240a # precompiled dawn chromium/6719
			)
			FetchContent_MakeAvailable(webgpu-backend-dawn-precompiled)

	else()

		message(FATAL_ERROR "Invalid value for WEBGPU_BACKEND: possible values are EMSCRIPTEN, WGPU, WGPU_STATIC, DAWN and DAWN_PRECOMPILED, but '${WEBGPU_BACKEND_U}' was provided.")

	endif()
endif()
