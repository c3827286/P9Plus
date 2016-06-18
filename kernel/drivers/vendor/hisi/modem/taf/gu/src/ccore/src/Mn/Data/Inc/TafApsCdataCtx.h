/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2011

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      3914-11-15
 * @file
 * @brief
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef TAF_APS_CDATA_CTX_H
#define TAF_APS_CDATA_CTX_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/
#include "vos.h"
#include "TafApsApi.h"


#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/




/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/


/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/
#if 0
/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_SYSTEM_INFO_STRU
 *
 * Description :
 *******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucConcurrentSupported; /**<  concurrent service supported */
    VOS_UINT8                           ucMoQos;               /**<  permission indicator for QoS in Origination message */
    VOS_UINT8                           ucSDBSupported;        /**<  Short Data Burst supported indicator */
    VOS_UINT8                           ucReserved;

    /* Max. Num. of alternative service options, for Origination or Page Response Message. Get from SDC */
}TAF_APS_CDATA_1X_SYSTEM_INFO_STRU;


/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_QOS_ASSURED_PARA_STRU
 *
 * Description : Parameters for assured mode QOS
 *******************************************************************************/
typedef struct
{

    /* *********************Forward QoS parameters begin************************ */
    VOS_UINT8                           ucFlQosIncl;             /**<  F_QOS_INCL: Forward qos included indicator */
    VOS_UINT8                           aucReserved1[1];

    /* Forward link assured mode priority adjustment */
    VOS_UINT8                           ucFlPriAdjIncl;          /**<  F_ASSURED_PRI_ADJ_INCL */
    VOS_UINT8                           ucFlPriAdj;              /**<  F_ASSURED_PRI_ADJ */

    /* Forward minimum user data rate parameter */
    VOS_UINT8                           ucFlReqDataRateIncl;
    VOS_UINT8                           ucFlReqDataRate;
    VOS_UINT8                           ucFlAccDataRateIncl;
    VOS_UINT8                           ucFlAccDataRate;

    /* Forward data loss rate parameter */
    VOS_UINT8                           ucFlReqDataLostRateIncl;
    VOS_UINT8                           ucFlReqDataLossRate;
    VOS_UINT8                           ucFlAccDataLostRateIncl;
    VOS_UINT8                           ucFlAccDataLostRate;

    /* Forward delay parameter */
    VOS_UINT8                           ucFlReqDelayIncl;
    VOS_UINT8                           ucFlReqDelay;
    VOS_UINT8                           ucFlAccDelayIncl;
    VOS_UINT8                           ucFlAccDelay;

    /* *********************Forward QoS parameters end************************ */

    /* *********************Reverse QoS parameters begin************************ */
    VOS_UINT8                           ucRlQosIncl;             /**<  R_QOS_INCL: Reverse qos included indicator */
    VOS_UINT8                           aucReserved2[1];

    /* Reverse link assured mode priority adjustment */
    VOS_UINT8                           ucRlPriAdjIncl;          /**<  R_ASSURED_PRI_ADJ_INCL */
    VOS_UINT8                           ucRlPriAdj;              /**<  R_ASSURED_PRI_ADJ */

    /* Reverse minimum user data rate parameter */
    VOS_UINT8                           ucRlReqDataRateIncl;
    VOS_UINT8                           ucRlReqDataRate;
    VOS_UINT8                           ucRlAccDataRateIncl;
    VOS_UINT8                           ucRlAccDataRate;

    /* Reverse data loss rate parameter */
    VOS_UINT8                           ucRlReqDataLostRateIncl;
    VOS_UINT8                           ucRlReqDataLossRate;
    VOS_UINT8                           ucRlAccDataLostRateIncl;
    VOS_UINT8                           ucRlAccDataLostRate;

    /* Reverse delay parameter */
    VOS_UINT8                           ucRlReqDelayIncl;
    VOS_UINT8                           ucRlReqDelay;
    VOS_UINT8                           ucRlAccDelayIncl;
    VOS_UINT8                           ucRlAccDelay;

    /* *********************Reverse QoS parameters end************************ */
}TAF_APS_CDATA_1X_QOS_ASSURED_PARA_STRU;

/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_QOS_NON_ASSURED_PARA_STRU
 *
 * Description : Parameters for non assured mode QOS
 *******************************************************************************/
typedef struct
{
    VOS_UINT8                                               ucPriAdjIncl; /**<  NON_ASSURED_PRI_ADJ_INCL: If non-assured priority adjustment field present or not */
    TAF_PS_CDATA_1X_QOS_NON_ASSURED_PRI_ENUM_UINT8          enPriAdj;     /**<  NON_ASSURED_PRI_ADJ: priority adjustment */
    VOS_UINT8                                               aucReserved[2];
}TAF_APS_CDATA_1X_QOS_NON_ASSURED_PARA_STRU;

/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_QOS_MODE_PARA_UNION
 *
 * Description :
 *******************************************************************************/
typedef union
{
    TAF_APS_CDATA_1X_QOS_ASSURED_PARA_STRU                  stAssurParam;/* _H2ASN_Skip */
    TAF_APS_CDATA_1X_QOS_NON_ASSURED_PARA_STRU              stNonAssurParam;
    /*  _H2ASN_IeChoice_When     TAF_APS_CDATA_QOS_MODE_ENUM_UINT8 */
}TAF_APS_CDATA_1X_QOS_MODE_PARA_UNION;

/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_QOS_MODE_STRU
 *
 * Description : QOS parameters, assured or non-assured depends on mode
 *******************************************************************************/
typedef struct
{
    TAF_APS_CDATA_QOS_MODE_ENUM_UINT8                       ucIsAssurMode;/* _H2ASN_IeChoice_Export TAF_APS_CDATA_QOS_MODE_ENUM_UINT8 */
    VOS_UINT8                                               aucReserved[3];
    TAF_APS_CDATA_1X_QOS_MODE_PARA_UNION                    unQosMode;
}TAF_APS_CDATA_1X_QOS_MODE_STRU;

/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_QOS_STRU
 *
 * Description : QOS Parameters
 *******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucQosIncl;             /**<  QOS indicator. Other fields valid only if this indicator is TRUE. */
    VOS_UINT8                           ucMaxBlobTypeSuppIncl; /**<  MAX_QOS_BLOB_TYPE_SUPPORTED(Table 22): If max blob type supported field present or not */
    VOS_UINT8                           ucMaxBlobTypeSupp;     /**<  QOS_BLOB_TYPE(Table 22): Max blob type supported */
    VOS_UINT8                           ucBlobTypeIncl;        /**<  QOS_BLOB_TYPE_INCL(Table 13): If QOS_BLOB_TYPE present or not */
    VOS_UINT8                           ucBlobType;            /**<  QOS_BLOB_TYPE(Table 13) */
    VOS_UINT8                           aucReserved[3];
    TAF_APS_CDATA_1X_QOS_MODE_STRU      stMode;                /**<  Qos Mode */
}TAF_APS_CDATA_1X_QOS_STRU;

/** ****************************************************************************
 * Name        : TAF_APS_CDATA_1X_QOS_TAB_STRU
 *
 * Description : QOS Parameters Table
 * Add this structure to TAF_PDP_TABLE_STRU.
 * Refer to: C.S0017-012-A_v2.0_060522 2.2.8  Quality of Service (QoS)
 * Mobile Station QoS BLOB :  Table 13
 * Base Station QoS BLOB : Table 22
 *******************************************************************************/
typedef struct
{
    TAF_APS_CDATA_1X_QOS_STRU           stDefault;   /**<  Default QOS values */
    TAF_APS_CDATA_1X_QOS_STRU           stDesired;   /**<  QOS values received from application */
    TAF_APS_CDATA_1X_QOS_STRU           stRecFromBs; /**<  QOS values received from base-station */
    TAF_APS_CDATA_1X_QOS_STRU          *pstCurr;     /* _H2ASN_Replace VOS_UINT32 *pstCurr */  /**<  Current values. Ptr to one of above */
}TAF_APS_CDATA_1X_QOS_TAB_STRU;
#endif


/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif
