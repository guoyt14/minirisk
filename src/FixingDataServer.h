#pragma once
#include <vector>
#include <map>
#include "Global.h"
#include "Date.h"

namespace minirisk {

// This is a dummy object that in a real system should be replaced by a server providing
// with real time (or historical) market data on demand and capable to produce snapshots of data.
// For the purpose of this example this simply serves to clients some stale pre-loaded market info.
struct FixingDataServer
{
public:
	FixingDataServer(const string& filename);

    // queries
    double get(const string& name, const Date& t) const;
    std::pair<double, bool> lookup(const string& name, const Date& t) const;

private:
    // for simplicity, assumes market data can only have type double
    std::map<std::pair<string, Date>, double> m_data;
};

} // namespace minirisk




