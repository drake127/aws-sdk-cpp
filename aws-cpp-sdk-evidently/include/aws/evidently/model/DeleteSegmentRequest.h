﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHEVIDENTLY_API DeleteSegmentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    DeleteSegmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSegment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline const Aws::String& GetSegment() const{ return m_segment; }

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline void SetSegment(const Aws::String& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline void SetSegment(Aws::String&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline void SetSegment(const char* value) { m_segmentHasBeenSet = true; m_segment.assign(value); }

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline DeleteSegmentRequest& WithSegment(const Aws::String& value) { SetSegment(value); return *this;}

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline DeleteSegmentRequest& WithSegment(Aws::String&& value) { SetSegment(std::move(value)); return *this;}

    /**
     * <p>Specifies the segment to delete.</p>
     */
    inline DeleteSegmentRequest& WithSegment(const char* value) { SetSegment(value); return *this;}

  private:

    Aws::String m_segment;
    bool m_segmentHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
