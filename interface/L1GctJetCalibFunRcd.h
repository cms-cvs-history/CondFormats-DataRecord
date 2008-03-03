#ifndef DataRecord_L1GctJetCalibFunRcd_h
#define DataRecord_L1GctJetCalibFunRcd_h
// -*- C++ -*-
//
// Package:     DataRecord
// Class  :     L1GctJetCalibFunRcd
// 
/**\class L1GctJetCalibFunRcd L1GctJetCalibFunRcd.h CondFormats/DataRecord/interface/L1GctJetCalibFunRcd.h

 Description: <one line class summary>

 Usage:
    <usage>

*/
//
// Author:      
// Created:     Thu Mar  1 15:04:16 CET 2007
// $Id: L1GctJetCalibFunRcd.h,v 1.1 2007/03/16 13:51:29 heath Exp $
//
//#include "FWCore/Framework/interface/EventSetupRecordImplementation.h"
//
//class L1GctJetCalibFunRcd : public edm::eventsetup::EventSetupRecordImplementation<L1GctJetCalibFunRcd> {};
//

#include "boost/mpl/vector.hpp"
#include "CondFormats/DataRecord/interface/L1JetEtScaleRcd.h"
#include "CondFormats/DataRecord/interface/L1TriggerKeyListRcd.h"
#include "CondFormats/DataRecord/interface/L1TriggerKeyRcd.h"

#include "FWCore/Framework/interface/DependentRecordImplementation.h"

class L1GctJetCalibFunRcd : public edm::eventsetup::DependentRecordImplementation<L1GctJetCalibFunRcd, boost::mpl::vector<L1JetEtScaleRcd,L1TriggerKeyListRcd,L1TriggerKeyRcd> > {};

#endif
