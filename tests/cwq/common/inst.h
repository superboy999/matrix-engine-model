/*** 
 * @Author: superboy
 * @Date: 2024-06-19 15:27:40
 * @LastEditTime: 2024-08-14 00:06:24
 * @LastEditors: superboy
 * @Description: 
 * @FilePath: /gem5-rvm/tests/cwq/common/inst.h
 * @
 */

inline static void mcfgk(uint16_t k_value)
{
    __asm__ __volatile__ ("mcfgk zero, %[src1]"
                            :
                            :[src1]"r"(k_value)
                        );
}

inline static void mcfgn(uint16_t n_value)
{
    __asm__ __volatile__ ("mcfgn zero, %[src1]"
                            :
                            :[src1]"r"(n_value)
                        );
}

inline static void mcfgm(uint16_t m_value)
{
    __asm__ __volatile__ ("mcfgm zero, %[src1]"
                            :
                            :[src1]"r"(m_value)
                        );
}

inline static void mcfgki(uint16_t k_value)
{
    __asm__ __volatile__ ("mcfgki zero, %0"
                            :
                            :"i"(k_value)
                        );
}

inline static void mcfgni(uint16_t n_value)
{
    __asm__ __volatile__ ("mcfgni zero, %0"
                            :
                            :"i"(n_value)
                        );
}

inline static void mcfgmi(uint16_t m_value)
{
    __asm__ __volatile__ ("mcfgmi zero, %0"
                            :
                            :"i"(m_value)
                        );
}

inline static void mldb(uint8_t mreg_idx, uint64_t *start_addr, uint64_t stride)
{
    if (mreg_idx == 0) {
        __asm__ __volatile__ ("mldb m0, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 1) {
        __asm__ __volatile__ ("mldb m1, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 2) {
        __asm__ __volatile__ ("mldb m2, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 3) {
        __asm__ __volatile__ ("mldb m3, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 4) {
        __asm__ __volatile__ ("mldb m4, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 5) {
        __asm__ __volatile__ ("mldb m5, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 6) {
        __asm__ __volatile__ ("mldb m6, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    } else if (mreg_idx == 7) {
        __asm__ __volatile__ ("mldb m7, %0, (%1)"
                                :
                                : "r"(stride), "r"(start_addr));
    }
}

inline static void mldb_m0(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m0, %0, (%1)"
                            :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m1(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m1, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m2(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m2, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m3(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m3, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m4(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m4, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m5(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m5, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m6(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m6, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

inline static void mldb_m7(uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mldb m7, %0, (%1)"
                                :
                            : "r"(stride), "r"(start_addr));
}

//Matrix multiplication: int8 datatype, unsigned x unsigned
inline static void matrixmul_int8_ss(int8_t destMregIdx, int8_t src1MregIdx, int8_t src2MregIdx)
{
    __asm__ __volatile__ ("mmaqa.b m%0, m%1, m%2"
                            : 
                            : "i" (destMregIdx), "i"(src2MregIdx), "i"(src1MregIdx));
}

inline static void mstb(int8_t srcMregIdx, uint64_t *start_addr, uint64_t stride)
{
    __asm__ __volatile__ ("mstb m%0, %1, (%2)"
                                :
                            : "i" (srcMregIdx), "r"(stride), "r"(start_addr));
}

inline static void madd(int8_t destMregIdx, int8_t src1MregIdx, int8_t src2MregIdx)
{
    __asm__ __volatile__ ("madd.s.mm m%0, m%1, m%2"
                            : 
                            : "i" (destMregIdx), "i"(src2MregIdx), "i"(src1MregIdx));
}