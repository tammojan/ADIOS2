/*
 * Heap.h
 *
 *  Created on: Dec 19, 2016
 *      Author: wfg
 */

#ifndef HEAP_H_
#define HEAP_H_


#include "core/Capsule.h"


namespace adios
{

/**
 * Buffer and Metadata are allocated in the Heap
 */
class Heap : public Capsule
{

public:

    std::vector<char> m_Data; ///< data buffer allocated using the STL in heap memory
    std::vector<char> m_Metadata; ///< metadata buffer allocated using the STL in heap memory

    const size_t m_MaxDataSize; ///< maximum data size set by user
    const size_t m_MaxMetadataSize; ///< maximum metadata size set by user

    /**
     * Unique constructor
     * @param accessMode
     * @param rankMPI
     * @param dataSize maximum data size set by user
     * @param metadataSize maximum metadata size set by user
     */
    Heap( const std::string accessMode, const int rankMPI, const size_t maxDataSize = 0, const size_t maxMetadataSize = 0 );

    ~Heap( );

    void Write( const Variable<char>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<unsigned char>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<short>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<unsigned short>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<int>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<unsigned int>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<long int>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<unsigned long int>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<long long int>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<unsigned long long int>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<float>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<double>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

    void Write( const Variable<long double>& variable, const std::vector<unsigned long long int>& localDimensions,
                const std::vector<unsigned long long int>& globalDimensions,
                const std::vector<unsigned long long int>& globalOffsets );

};





} //end namespace






#endif /* HEAP_H_ */
