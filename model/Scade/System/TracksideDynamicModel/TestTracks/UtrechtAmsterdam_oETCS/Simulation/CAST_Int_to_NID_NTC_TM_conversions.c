/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_NTC_TM_conversions.h"

void CAST_Int_to_NID_NTC_reset_TM_conversions(
  outC_CAST_Int_to_NID_NTC_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_NID_NTC */
void CAST_Int_to_NID_NTC_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_NTC::nid_ntc_int */kcg_int nid_ntc_int,
  outC_CAST_Int_to_NID_NTC_TM_conversions *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  
  outC->_L5 = 0;
  outC->_L1 = nid_ntc_int;
  outC->_L4 = outC->_L1 < outC->_L5;
  outC->_L3 = 255;
  outC->_L2 = outC->_L1 > outC->_L3;
  _1_noname = outC->_L2;
  noname = outC->_L4;
  outC->nid_ntc = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_NTC_TM_conversions.c
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

