/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef GRAPHICS_SCALER_NORMAL_H
#define GRAPHICS_SCALER_NORMAL_H

#include "graphics/scalerplugin.h"

class NormalPlugin : public ScalerPluginObject {
public:
	NormalPlugin();
	virtual void initialize(const Graphics::PixelFormat &format);
	virtual void scale(const uint8 *srcPtr, uint32 srcPitch,
							uint8 *dstPtr, uint32 dstPitch, int width, int height, int x, int y);
	virtual uint increaseFactor();
	virtual uint decreaseFactor();
	virtual uint getFactor() const { return _factor; }
	virtual bool canDrawCursor() const { return true; }
	virtual uint extraPixels() const { return 0; }
	virtual const char *getName() const;
	virtual const char *getPrettyName() const;
};


#endif