/*
* Copyright (c) 2007 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#pragma once

using namespace System;

#include "Enums.h"

namespace SlimDX
{
	namespace DXGI
	{
		public value class OutputDescription
		{
			String^ m_DeviceName;
			Drawing::Rectangle^ m_DesktopCoordinates;
			bool m_AttachedToDesktop;
			DisplayModeRotation m_Rotation;
			IntPtr m_Monitor;

		internal:
			OutputDescription( const DXGI_OUTPUT_DESC& native );

		public:
			property String^ Name
			{
				String^ get();
			}

			property Drawing::Rectangle^ DesktopBounds
			{
				Drawing::Rectangle^ get();
			}

			property bool IsAttachedToDesktop
			{
				bool get();
			}

			property DisplayModeRotation Rotation
			{
				DisplayModeRotation get();
			}

			property IntPtr MonitorHandle
			{
				IntPtr get();
			}
		};
	}
};