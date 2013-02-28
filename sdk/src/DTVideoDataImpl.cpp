/// Copyright 2010-2012 4kdownload.com (developers@4kdownload.com)
/**
    This file is part of 4k Download.

    4k Download is free software; you can redistribute it and/or modify
    it under the terms of the one of two licenses as you choose:

    1. GNU GENERAL PUBLIC LICENSE Version 3
    (See file COPYING.GPLv3 for details).

    2. 4k Download Commercial License
    (Send request to developers@4kdownload.com for details).
   
*/



// precompiled header begin
#include "DTHeadersMedia.h"
// precompiled header end

/// \file   DTVideoDataImpl.cpp

#include "DTVideoDataImpl.h"
#include "ffmpeg/DTFFVideoData.h"

namespace openmedia {

video_data_ptr video_data::Impl::duplicate() const
{
    return video_data_ptr( new ff_video_data(this) );    
}

} // namespace openmedia
