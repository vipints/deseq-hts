/*
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 3 of the License, or
*  (at your option) any later version.
*
*   Written (W) 2010-2011 Jonas Behr, Regina Bohnert, Gunnar Raetsch
*   Written (W) 2012-2014 Vipin T Sreedharan
*   Copyright (C) 2009-2014 Max Planck Society & Memorial Sloan Kettering Cancer Center
*/


#include <stdio.h>
#include <mex.h>

#ifndef __MEX_INPUT_h__
#define __MEX_INPUT_h__
	char *get_string(const mxArray *prhs);
	bool get_bool(const mxArray *prhs);
	int get_int(const mxArray *prhs);
#endif
