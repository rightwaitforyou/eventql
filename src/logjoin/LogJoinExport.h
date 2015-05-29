/**
 * Copyright (c) 2015 - The CM Authors <legal@clickmatcher.com>
 *   All Rights Reserved.
 *
 * This file is CONFIDENTIAL -- Distribution or duplication of this material or
 * the information contained herein is strictly forbidden unless prior written
 * permission is obtained.
 */
#ifndef _CM_LOGJOINEXPORT_H
#define _CM_LOGJOINEXPORT_H
#include "fnord-base/stdtypes.h"
#include "fnord-http/httpconnectionpool.h"
#include "fnord-feeds/BrokerClient.h"
#include "src/JoinedSession.pb.h"

using namespace fnord;

namespace cm {

class LogJoinExport {
public:

  LogJoinExport(http::HTTPConnectionPool* http);

  void exportSession(const JoinedSession& session);

protected:

  void exportPreferenceSetFeed(const JoinedSession& session);
  void exportQueryFeed(const JoinedSession& session);

  feeds::BrokerClient broker_;
};

} // namespace cm
#endif