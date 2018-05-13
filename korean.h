#ifndef BWGAME_KOREAN_H
#define BWGAME_KOREAN_H

#include "containers.h"

#include <cstdint>

namespace bwgame {

namespace korean {

	extern uint16_t table_81[];
	extern uint16_t table_82[];
	extern uint16_t table_83[];
	extern uint16_t table_84[];
	extern uint16_t table_85[];
	extern uint16_t table_86[];
	extern uint16_t table_87[];
	extern uint16_t table_88[];
	extern uint16_t table_89[];
	extern uint16_t table_8a[];
	extern uint16_t table_8b[];
	extern uint16_t table_8c[];
	extern uint16_t table_8d[];
	extern uint16_t table_8e[];
	extern uint16_t table_8f[];
	extern uint16_t table_90[];
	extern uint16_t table_91[];
	extern uint16_t table_92[];
	extern uint16_t table_93[];
	extern uint16_t table_94[];
	extern uint16_t table_95[];
	extern uint16_t table_96[];
	extern uint16_t table_97[];
	extern uint16_t table_98[];
	extern uint16_t table_99[];
	extern uint16_t table_9a[];
	extern uint16_t table_9b[];
	extern uint16_t table_9c[];
	extern uint16_t table_9d[];
	extern uint16_t table_9e[];
	extern uint16_t table_9f[];
	extern uint16_t table_a0[];
	extern uint16_t table_a1[];
	extern uint16_t table_a2[];
	extern uint16_t table_a3[];
	extern uint16_t table_a4[];
	extern uint16_t table_a5[];
	extern uint16_t table_a6[];
	extern uint16_t table_a7[];
	extern uint16_t table_a8[];
	extern uint16_t table_a9[];
	extern uint16_t table_aa[];
	extern uint16_t table_ab[];
	extern uint16_t table_ac[];
	extern uint16_t table_ad[];
	extern uint16_t table_ae[];
	extern uint16_t table_af[];
	extern uint16_t table_b0[];
	extern uint16_t table_b1[];
	extern uint16_t table_b2[];
	extern uint16_t table_b3[];
	extern uint16_t table_b4[];
	extern uint16_t table_b5[];
	extern uint16_t table_b6[];
	extern uint16_t table_b7[];
	extern uint16_t table_b8[];
	extern uint16_t table_b9[];
	extern uint16_t table_ba[];
	extern uint16_t table_bb[];
	extern uint16_t table_bc[];
	extern uint16_t table_bd[];
	extern uint16_t table_be[];
	extern uint16_t table_bf[];
	extern uint16_t table_c0[];
	extern uint16_t table_c1[];
	extern uint16_t table_c2[];
	extern uint16_t table_c3[];
	extern uint16_t table_c4[];
	extern uint16_t table_c5[];
	extern uint16_t table_c6[];
	extern uint16_t table_c7[];
	extern uint16_t table_c8[];
	extern uint16_t table_ca[];
	extern uint16_t table_cb[];
	extern uint16_t table_cc[];
	extern uint16_t table_cd[];
	extern uint16_t table_ce[];
	extern uint16_t table_cf[];
	extern uint16_t table_d0[];
	extern uint16_t table_d1[];
	extern uint16_t table_d2[];
	extern uint16_t table_d3[];
	extern uint16_t table_d4[];
	extern uint16_t table_d5[];
	extern uint16_t table_d6[];
	extern uint16_t table_d7[];
	extern uint16_t table_d8[];
	extern uint16_t table_d9[];
	extern uint16_t table_da[];
	extern uint16_t table_db[];
	extern uint16_t table_dc[];
	extern uint16_t table_dd[];
	extern uint16_t table_de[];
	extern uint16_t table_df[];
	extern uint16_t table_e0[];
	extern uint16_t table_e1[];
	extern uint16_t table_e2[];
	extern uint16_t table_e3[];
	extern uint16_t table_e4[];
	extern uint16_t table_e5[];
	extern uint16_t table_e6[];
	extern uint16_t table_e7[];
	extern uint16_t table_e8[];
	extern uint16_t table_e9[];
	extern uint16_t table_ea[];
	extern uint16_t table_eb[];
	extern uint16_t table_ec[];
	extern uint16_t table_ed[];
	extern uint16_t table_ee[];
	extern uint16_t table_ef[];
	extern uint16_t table_f0[];
	extern uint16_t table_f1[];
	extern uint16_t table_f2[];
	extern uint16_t table_f3[];
	extern uint16_t table_f4[];
	extern uint16_t table_f5[];
	extern uint16_t table_f6[];
	extern uint16_t table_f7[];
	extern uint16_t table_f8[];
	extern uint16_t table_f9[];
	extern uint16_t table_fa[];
	extern uint16_t table_fb[];
	extern uint16_t table_fc[];
	extern uint16_t table_fd[];

	extern uint32_t cp949_to_unicode(const char*& ptr, const char* end);
	extern bool korean_locale_to_utf8(const a_string& src, a_string& dst);

}

}

#endif
