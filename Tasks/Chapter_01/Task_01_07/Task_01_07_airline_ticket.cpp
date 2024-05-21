module airline_ticket;

using namespace std;

double AirlineTicket::calculatePriceInDollars() const
{
    if (hasEliteSuperRewardsStatus())
    {
        return 0;
    }
    return getNumberOfMiles() * 0.1;
}

const string& AirlineTicket::getPassengerName() const
{
    return m_passengerName;
}

void AirlineTicket::setPassengerName(const string& name)
{
    m_passengerName = name;
}

int AirlineTicket::getNumberOfMiles() const
{
    return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles)
{
    m_numberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const
{
    return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool status)
{
    m_hasEliteSuperRewardsStatus = status;
}

optional<int> AirlineTicket::getFrequentFlyerNumber() const
{
    return m_frequentFlyerNumber;
}

void AirlineTicket::setFrequentFlyerNumber(int number)
{
    m_frequentFlyerNumber = number;
}