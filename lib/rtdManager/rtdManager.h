#ifndef RTDMANAGERH
#define RTDMANAGERH
#include <rtd.h>
#include <portexpander.h>
#include <vector>

class RtdManager{
    public:
        RtdManager(PortExpander portExpander);
        void init();
        std::vector<float> readAll();
        void setResistances(float nominalRes, float referenceRes);

        std::vector<RTD> m_rtdList;
        PortExpander m_portEx;
        float nominalResistance;
        float referenceResistance;
};

#endif