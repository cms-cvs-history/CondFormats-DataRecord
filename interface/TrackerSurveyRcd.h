#ifndef CondFormats_DataRecord_TrackerSurveyRcd_H
#define CondFormats_DataRecord_TrackerSurveyRcd_H

/** \class TrackerSurveyRcd
 *
 *  DB record to hold values of alignment parameters from survey.
 *
 *  $Date: 2007/03/22 $
 *  $Revision: 1.1 $
 *  \author Chung Khim Lae
 */

#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"

class TrackerSurveyRcd:
  public edm::eventsetup::EventSetupRecordImplementation<TrackerSurveyRcd>
{
};

#endif
