#include "Symbol.h"

namespace ctc::semantic
{
    symbol_type symbol::GetType() const
    {
        return this->m_type;
    }

    std::string symbol::GetIdentifier() const
    {
        return this->m_identifier;
    }

    std::string symbol::GetScope() const
    {
        return this->m_scope;
    }
} // namespace ctc::semantic
