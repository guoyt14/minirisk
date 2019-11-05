#include "CurveFXSpot.h"
#include "Market.h"
#include "Streamer.h"



namespace minirisk {

CurveFXSpot::CurveFXSpot(Market *mkt, const Date& today, const string& curve_name)
    : m_today(today)
    , m_name(curve_name)
    , m_rate(mkt->get_fx_spot(curve_name))
{
}

double CurveFXSpot::spot() const
{
	return m_rate;
}

} // namespace minirisk