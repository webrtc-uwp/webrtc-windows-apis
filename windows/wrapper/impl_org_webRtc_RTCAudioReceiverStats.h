
#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCAudioReceiverStats.h"

#include "impl_org_webRtc_pre_include.h"
#include "api/stats/rtcstats_objects.h"
#include "impl_org_webRtc_post_include.h"

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCAudioReceiverStats : public wrapper::org::webRtc::RTCAudioReceiverStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCAudioReceiverStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCAudioReceiverStats, WrapperImplType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCStats, NativeType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCMediaStreamTrackStats, NativeStats);

          RTCAudioReceiverStatsWeakPtr thisWeak_;
          NativeTypeUniPtr native_;

          RTCAudioReceiverStats() noexcept;
          virtual ~RTCAudioReceiverStats() noexcept;

          void trace() noexcept;

          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCMediaHandlerStats
          String get_trackIdentifier() noexcept override;
          Optional< bool > get_remoteSource() noexcept override;
          bool get_ended() noexcept override;
          String get_kind() noexcept override;
          wrapper::org::webRtc::RTCPriorityType get_priority() noexcept override;

          // properties RTCAudioHandlerStats
          double get_audioLevel() noexcept override;
          double get_totalAudioEnergy() noexcept override;
          bool get_voiceActivityFlag() noexcept override;
          double get_totalSamplesDuration() noexcept override;

          // properties RTCAudioReceiverStats
          ::zsLib::Time get_estimatedPlayoutTimestamp() noexcept override;
          ::zsLib::Milliseconds get_jitterBufferDelay() noexcept override;
          unsigned long long get_jitterBufferEmittedCount() noexcept override;
          unsigned long long get_totalSamplesReceived() noexcept override;
          unsigned long long get_concealedSamples() noexcept override;
          unsigned long long get_concealmentEvents() noexcept override;

          ZS_NO_DISCARD() static WrapperTypePtr toWrapper(NativeTypeUniPtr value) noexcept;

          ZS_NO_DISCARD() static ::zsLib::Time get_estimatedPlayoutTimestamp(const NativeStats *native) noexcept;
          ZS_NO_DISCARD() static ::zsLib::Milliseconds get_jitterBufferDelay(const NativeStats *native) noexcept;
          ZS_NO_DISCARD() static unsigned long long get_jitterBufferEmittedCount(const NativeStats *native) noexcept;
          ZS_NO_DISCARD() static unsigned long long get_totalSamplesReceived(const NativeStats *native) noexcept;
          ZS_NO_DISCARD() static unsigned long long get_concealedSamples(const NativeStats *native) noexcept;
          ZS_NO_DISCARD() static unsigned long long get_concealmentEvents(const NativeStats *native) noexcept;

          ZS_NO_DISCARD() const NativeStats &cast() noexcept;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

