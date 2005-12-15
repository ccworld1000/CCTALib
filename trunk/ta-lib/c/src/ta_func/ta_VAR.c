/* TA-LIB Copyright (c) 1999-2005, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *  JV       Jesus Viver <324122@cienz.unizar.es>
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  112400 MF   Template creation.
 *  100502 JV   Speed optimization of the algorithm
 *  052603 MF   Adapt code to compile with .NET Managed C++
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */    namespace TA { namespace Lib {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */    #include "ta_trace.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::VAR_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int VAR_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                        double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #else
/* Generated */ int TA_VAR_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                    double        optInNbDev )  /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert lookback code here. */
   UNUSED_VARIABLE(optInNbDev);

   return optInTimePeriod-1;
}

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/*
 * TA_VAR - Variance
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * optInNbDev:(From TA_REAL_MIN to TA_REAL_MAX)
 *    Nb of deviations
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::VAR( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        cli::array<double>^ inReal,
/* Generated */                                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                        double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNbElement,
/* Generated */                                        cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode VAR( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        double       inReal[],
/* Generated */                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                        double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                        MInteger     outBegIdx,
/* Generated */                        MInteger     outNbElement,
/* Generated */                        double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_VAR( int    startIdx,
/* Generated */                    int    endIdx,
/* Generated */                    const double inReal[],
/* Generated */                    int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                    double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                    int          *outBegIdx,
/* Generated */                    int          *outNbElement,
/* Generated */                    double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */ 
/* Generated */    /* Validate the parameters. */
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( !inReal ) return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 5;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInNbDev == TA_REAL_DEFAULT )
/* Generated */       optInNbDev = 1.000000e+0;
/* Generated */    else if( (optInNbDev < -3.000000e+37) ||/* Generated */  (optInNbDev > 3.000000e+37) )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */
   return FUNCTION_CALL(INT_VAR)( startIdx, endIdx, inReal,
                                  optInTimePeriod, /* From 1 to TA_INTEGER_MAX */                      
                                  outBegIdx, outNbElement, outReal );
}


#if defined( _MANAGED )
enum class Core::TA_RetCode Core::INT_VAR( int    startIdx,
                                           int    endIdx,
									       cli::array<INPUT_TYPE>^ inReal,
                                           int    optInTimePeriod,                       
                                           [Out]int% outBegIdx,
                                           [Out]int% outNbElement,
										   cli::array<double>^ outReal )
#elif defined( _JAVA )
public TA_RetCode INT_VAR( int        startIdx,
                           int        endIdx,
                           INPUT_TYPE inReal[],
                           int        optInTimePeriod, /* From 1 to TA_INTEGER_MAX */                       
                           MInteger   outBegIdx,
                           MInteger   outNbElement,
                           double     outReal[] )
#else
TA_RetCode TA_PREFIX(INT_VAR)( int    startIdx,
                               int    endIdx,
                               const INPUT_TYPE *inReal,
                               int    optInTimePeriod, /* From 1 to TA_INTEGER_MAX */                       
                               int   *outBegIdx,
                               int   *outNbElement,
                               double      *outReal )
#endif
{
   double tempReal, periodTotal1, periodTotal2, meanValue1, meanValue2;
   int i, outIdx, trailingIdx, nbInitialElementNeeded;

   /* Validate the calculation method type and
    * identify the minimum number of price bar needed
    * to calculate at least one output.
    */
   nbInitialElementNeeded = (optInTimePeriod-1);

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < nbInitialElementNeeded )
      startIdx = nbInitialElementNeeded;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNbElement);
      return NAMESPACE(TA_RetCode)TA_SUCCESS;
   }

   /* Do the MA calculation using tight loops. */
   /* Add-up the initial periods, except for the last value. */
   periodTotal1 = 0;
   periodTotal2 = 0;
   trailingIdx = startIdx-nbInitialElementNeeded;

   i=trailingIdx;
   if( optInTimePeriod > 1 )
   {
      while( i < startIdx ) {
         tempReal = inReal[i++];
         periodTotal1 += tempReal;
         tempReal *= tempReal;
         periodTotal2 += tempReal;
      }
   }

   /* Proceed with the calculation for the requested range.
    * Note that this algorithm allows the inReal and
    * outReal to be the same buffer.
    */
   outIdx = 0;
   do
   {
      tempReal = inReal[i++];

      /* Square and add all the deviation over
       * the same periods.
       */

      periodTotal1 += tempReal;
      tempReal *= tempReal;
      periodTotal2 += tempReal;

      /* Square and add all the deviation over
       * the same period.
       */

      meanValue1 = periodTotal1 / optInTimePeriod;
      meanValue2 = periodTotal2 / optInTimePeriod;

      tempReal = inReal[trailingIdx++];
      periodTotal1 -= tempReal;
      tempReal *= tempReal;
      periodTotal2 -= tempReal;

      outReal[outIdx++] = meanValue2-meanValue1*meanValue1;
   } while( i <= endIdx );

   /* All done. Indicate the output limits and return. */
   VALUE_HANDLE_DEREF(outNbElement) = outIdx;
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;

   return NAMESPACE(TA_RetCode)TA_SUCCESS;
}

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::VAR( int    startIdx,
/* Generated */                                        int    endIdx,
/* Generated */                                        cli::array<float>^ inReal,
/* Generated */                                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                        double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                                        [Out]int%    outBegIdx,
/* Generated */                                        [Out]int%    outNbElement,
/* Generated */                                        cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode VAR( int    startIdx,
/* Generated */                        int    endIdx,
/* Generated */                        float        inReal[],
/* Generated */                        int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                        double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                        MInteger     outBegIdx,
/* Generated */                        MInteger     outNbElement,
/* Generated */                        double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_VAR( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      const float  inReal[],
/* Generated */                      int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      double        optInNbDev, /* From TA_REAL_MIN to TA_REAL_MAX */
/* Generated */                      int          *outBegIdx,
/* Generated */                      int          *outNbElement,
/* Generated */                      double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( !inReal ) return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 5;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     if( optInNbDev == TA_REAL_DEFAULT )
/* Generated */        optInNbDev = 1.000000e+0;
/* Generated */     else if( (optInNbDev < -3.000000e+37) ||  (optInNbDev > 3.000000e+37) )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    return FUNCTION_CALL(INT_VAR)( startIdx, endIdx, inReal,
/* Generated */                                   optInTimePeriod,                       
/* Generated */                                   outBegIdx, outNbElement, outReal );
/* Generated */ }
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::INT_VAR( int    startIdx,
/* Generated */                                            int    endIdx,
/* Generated */ 									       cli::array<INPUT_TYPE>^ inReal,
/* Generated */                                            int    optInTimePeriod,                       
/* Generated */                                            [Out]int% outBegIdx,
/* Generated */                                            [Out]int% outNbElement,
/* Generated */ 										   cli::array<double>^ outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode INT_VAR( int        startIdx,
/* Generated */                            int        endIdx,
/* Generated */                            INPUT_TYPE inReal[],
/* Generated */                            int        optInTimePeriod,                        
/* Generated */                            MInteger   outBegIdx,
/* Generated */                            MInteger   outNbElement,
/* Generated */                            double     outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_PREFIX(INT_VAR)( int    startIdx,
/* Generated */                                int    endIdx,
/* Generated */                                const INPUT_TYPE *inReal,
/* Generated */                                int    optInTimePeriod,                        
/* Generated */                                int   *outBegIdx,
/* Generated */                                int   *outNbElement,
/* Generated */                                double      *outReal )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double tempReal, periodTotal1, periodTotal2, meanValue1, meanValue2;
/* Generated */    int i, outIdx, trailingIdx, nbInitialElementNeeded;
/* Generated */    nbInitialElementNeeded = (optInTimePeriod-1);
/* Generated */    if( startIdx < nbInitialElementNeeded )
/* Generated */       startIdx = nbInitialElementNeeded;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNbElement);
/* Generated */       return NAMESPACE(TA_RetCode)TA_SUCCESS;
/* Generated */    }
/* Generated */    periodTotal1 = 0;
/* Generated */    periodTotal2 = 0;
/* Generated */    trailingIdx = startIdx-nbInitialElementNeeded;
/* Generated */    i=trailingIdx;
/* Generated */    if( optInTimePeriod > 1 )
/* Generated */    {
/* Generated */       while( i < startIdx ) {
/* Generated */          tempReal = inReal[i++];
/* Generated */          periodTotal1 += tempReal;
/* Generated */          tempReal *= tempReal;
/* Generated */          periodTotal2 += tempReal;
/* Generated */       }
/* Generated */    }
/* Generated */    outIdx = 0;
/* Generated */    do
/* Generated */    {
/* Generated */       tempReal = inReal[i++];
/* Generated */       periodTotal1 += tempReal;
/* Generated */       tempReal *= tempReal;
/* Generated */       periodTotal2 += tempReal;
/* Generated */       meanValue1 = periodTotal1 / optInTimePeriod;
/* Generated */       meanValue2 = periodTotal2 / optInTimePeriod;
/* Generated */       tempReal = inReal[trailingIdx++];
/* Generated */       periodTotal1 -= tempReal;
/* Generated */       tempReal *= tempReal;
/* Generated */       periodTotal2 -= tempReal;
/* Generated */       outReal[outIdx++] = meanValue2-meanValue1*meanValue1;
/* Generated */    } while( i <= endIdx );
/* Generated */    VALUE_HANDLE_DEREF(outNbElement) = outIdx;
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    return NAMESPACE(TA_RetCode)TA_SUCCESS;
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }} // Close namespace TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

