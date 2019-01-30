
#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRemoteInboundRtpStreamStats.h"

#include "impl_org_webRtc_pre_include.h"
#include "api/stats/rtcstats_objects.h"
#include "impl_org_webRtc_post_include.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRemoteInboundRtpStreamStats : public wrapper::org::webRtc::RTCRemoteInboundRtpStreamStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCRemoteInboundRtpStreamStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCRemoteInboundRtpStreamStats, WrapperImplType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCStats, NativeType);
          ZS_DECLARE_TYPEDEF_PTR(::webrtc::RTCInboundRTPStreamStats, NativeStats);

          RTCRemoteInboundRtpStreamStatsWeakPtr thisWeak_;
          NativeTypeUniPtr native_;

          RTCRemoteInboundRtpStreamStats() noexcept;
          virtual ~RTCRemoteInboundRtpStreamStats() noexcept;

          void trace() noexcept;

          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCRtpStreamStats
          Optional< uint32_t > get_ssrc() noexcept override;
          String get_kind() noexcept override;
          String get_transportId() noexcept override;
          String get_codecId() noexcept override;
          unsigned long get_firCount() noexcept override;
          unsigned long get_pliCount() noexcept override;
          unsigned long get_nackCount() noexcept override;
          unsigned long get_sliCount() noexcept override;
          unsigned long long get_qpSum() noexcept override;

          // properties RTCReceivedRtpStreamStats
          unsigned long get_packetsReceived() noexcept override;
          unsigned long get_packetsLost() noexcept override;
          double get_jitter() noexcept override;
          unsigned long get_packetsDiscarded() noexcept override;
          unsigned long get_packetsRepaired() noexcept override;
          unsigned long get_burstPacketsLost() noexcept override;
          unsigned long get_burstPacketsDiscarded() noexcept override;
          unsigned long get_burstLossCount() noexcept override;
          unsigned long get_burstDiscardCount() noexcept override;
          double get_burstLossRate() noexcept override;
          double get_burstDiscardRate() noexcept override;
          double get_gapLossRate() noexcept override;
          double get_gapDiscardRate() noexcept override;

          // properties RTCRemoteInboundRtpStreamStats
          String get_localId() noexcept override;
          double get_roundTripTime() noexcept override;
          double get_fractionLost() noexcept override;

          ZS_NO_DISCARD() static WrapperTypePtr toWrapper(NativeTypeUniPtr value) noexcept;
          ZS_NO_DISCARD() const NativeStats &cast() noexcept;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

