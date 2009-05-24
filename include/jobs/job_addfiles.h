 /* BonkEnc Audio Encoder
  * Copyright (C) 2001-2009 Robert Kausch <robert.kausch@bonkenc.org>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef _H_JOB_ADDFILES_
#define _H_JOB_ADDFILES_

#include "job.h"

namespace BonkEnc
{
	class JobAddFiles : public Job
	{
		protected:
			Array<String>	 files;
		public:
					 JobAddFiles(const Array<String> &);
			virtual		~JobAddFiles();

			virtual Bool	 ReadyToRun();
		slots:
			virtual Error	 Perform();
	};
};

#endif