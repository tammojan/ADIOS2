/*
 * Distributed under the OSI-approved Apache License, Version 2.0.  See
 * accompanying file Copyright.txt for details.
 *
 * InlineWriter.tcc implementation of template functions with known type
 *
 *  Created on: Nov 16, 2018
 *      Author: Aron Helser aron.helser@kitware.com
 */
#ifndef ADIOS2_ENGINE_INLINEWRITER_TCC_
#define ADIOS2_ENGINE_INLINEWRITER_TCC_

#include "InlineWriter.h"

#include <iostream>

namespace adios2
{
namespace core
{
namespace engine
{

template <class T>
void InlineWriter::PutSyncCommon(Variable<T> &variable,
                                 typename Variable<T>::Info &blockInfo)
{
    if (variable.m_ShapeID == ShapeID::GlobalValue ||
        variable.m_ShapeID == ShapeID::LocalValue)
    {
        blockInfo.IsValue = true;
        blockInfo.Value = blockInfo.Data[0];
    }
    if (m_Verbosity == 5)
    {
        std::cout << "Inline Writer " << m_WriterRank << "     PutSync("
                  << variable.m_Name << ")\n";
    }
}

template <class T>
void InlineWriter::PutDeferredCommon(Variable<T> &variable, const T *data)
{
    variable.SetBlockInfo(data, CurrentStep());
    if (m_Verbosity == 5)
    {
        std::cout << "Inline Writer " << m_WriterRank << "     PutDeferred("
                  << variable.m_Name << ")\n";
    }
}

} // end namespace engine
} // end namespace core
} // end namespace adios2

#endif /* ADIOS2_ENGINE_INLINEWRITER_TCC_ */
