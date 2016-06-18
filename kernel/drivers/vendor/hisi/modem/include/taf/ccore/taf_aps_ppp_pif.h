/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2015

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2015-04-30
 * @file
 * @brief
 *
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef TAF_APS_PPP_PIF_H
#define TAF_APS_PPP_PIF_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/

#include "vos.h"
#include "VosPidDef.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/

#define TAF_APS_PPP_IPV4_ADDR_LEN                           ( 4 )
#define TAF_APS_PPP_IPV6_ADDR_LEN                           ( 16 )
#define TAF_APS_PPP_MAX_AUTHDATA_USERNAME_LEN               ( 127 )
#define TAF_APS_PPP_MAX_AUTHDATA_PASSWORD_LEN               ( 127 )

/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16
 *
 * Description :
 *******************************************************************************/
enum TAF_APS_PPP_PIF_MSG_TYPE_ENUM
{
    ID_APS_PPP_ACT_REQ                                      = 0x0000, /* _H2ASN_MsgChoice APS_PPP_ACT_REQ_STRU*/ /***< @sa APS_PPP_ACT_REQ_STRU */
    ID_PPP_APS_ACT_CNF                                      = 0x0001, /* _H2ASN_MsgChoice PPP_APS_ACT_CNF_STRU*/ /***< @sa PPP_APS_ACT_CNF_STRU */
    ID_APS_PPP_DEACT_REQ                                    = 0x0002, /* _H2ASN_MsgChoice APS_PPP_DEACT_REQ_STRU*/ /***< @sa APS_PPP_DEACT_REQ_STRU */
    ID_PPP_APS_DEACT_CNF                                    = 0x0003, /* _H2ASN_MsgChoice PPP_APS_DEACT_CNF_STRU*/ /***< @sa PPP_APS_DEACT_CNF_STRU */
    ID_APS_PPP_DEACT_IND                                    = 0x0004, /* _H2ASN_MsgChoice APS_PPP_DEACT_IND_STRU*/ /***< @sa APS_PPP_DEACT_IND_STRU */
    ID_PPP_APS_DEACT_NTF                                    = 0x0005, /* _H2ASN_MsgChoice PPP_APS_DEACT_NTF_STRU*/ /***< @sa PPP_APS_DEACT_NTF_STRU */
    ID_PPP_APS_MODIFY_IND                                   = 0x0006, /* _H2ASN_MsgChoice PPP_APS_MODIFY_IND_STRU*/ /***< @sa PPP_APS_MODIFY_IND_STRU */
    ID_APS_PPP_MODE_CHANGE_NTF                              = 0x0007, /* _H2ASN_MsgChoice APS_PPP_MODE_CHANGE_NTF_STRU*/ /***< @sa APS_PPP_MODE_CHANGE_NTF_STRU */
    ID_APS_PPP_DIAL_MODE_NTF                                = 0X0008, /* _H2ASN_MsgChoice APS_PPP_DIAL_MODE_NTF_STRU*/ /***< @sa APS_PPP_DIAL_MODE_NTF_STRU */

    ID_APS_PPP_LINK_STATUS_NTF                              = 0x0009, /* _H2ASN_MsgChoice APS_PPP_LINK_STATUS_NTF_STRU */
    ID_PPP_APS_RECONN_IND                                   = 0x000A, /* _H2ASN_MsgChoice PPP_APS_RECONN_IND_STRU */
    ID_PPP_APS_PPP_RENEGO_IND                               = 0x000B, /* _H2ASN_MsgChoice PPP_APS_PPP_RENEGO_IND_STRU*/

    ID_TAF_APS_PPP_PIF_MSG_TYPE_ENUM_BUTT                   = 0xFFFF
};
typedef VOS_UINT16 TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16;

/** ****************************************************************************
 * Name        : TAF_APS_PPP_ADDR_TYPE_ENUM_UINT8
 *
 * Description :
 *******************************************************************************/
enum TAF_APS_PPP_ADDR_TYPE_ENUM
{
    TAF_APS_PPP_ADDR_TYPE_IPV4            = 0x01,
    TAF_APS_PPP_ADDR_TYPE_IPV6            = 0x02,
    TAF_APS_PPP_ADDR_TYPE_IPV4V6          = 0x03,
    TAF_APS_PPP_ADDR_TYPE_PPP             = 0x04,
    TAF_APS_PPP_ADDR_TYPE_BUTT            = 0x05
};
typedef VOS_UINT8 TAF_APS_PPP_ADDR_TYPE_ENUM_UINT8;

/** ****************************************************************************
 * Name        : TAF_APS_PPP_RAT_MODE_ENUM_UINT8
 *
 * Description :
 *******************************************************************************/
enum TAF_APS_PPP_RAT_MODE_ENUM
{
    TAF_APS_PPP_RAT_MODE_1X               = 0x00,
    TAF_APS_PPP_RAT_MODE_HRPD             = 0x01,
    TAF_APS_PPP_RAT_MODE_BUTT             = 0x02
};
typedef VOS_UINT8 TAF_APS_PPP_RAT_MODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : TAF_APS_PPP_CDATA_DIAL_MODE_ENUM_UINT8
 结构说明  : 当前的接入技术
 1.日    期   : 2015年07月01日
   作    者   : y00314741
   修改内容   : 新建
*****************************************************************************/
enum TAF_APS_PPP_CDATA_DIAL_MODE_ENUM
{
    TAF_APS_PPP_CDATA_DIAL_MODE_ASYNC_CALL   = 0x00,
    TAF_APS_PPP_CDATA_DIAL_MODE_RELAY        = 0x01,                                 /* 数据传输模式中继模式 */
    TAF_APS_PPP_CDATA_DIAL_MODE_NETWORK      = 0x02,                                 /* 数据传输模式网络模式  */
    TAF_APS_PPP_CDATA_DIAL_MODE_BUTT
};
typedef VOS_UINT8 TAF_APS_PPP_CDATA_DIAL_MODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : TAF_APS_PPP_LINK_STATUS_ENUM
 结构说明  : 链路建链情况枚举
 1.日    期   : 2015年11月09日
   作    者   : g00261581
   修改内容   : 新建
*****************************************************************************/
enum TAF_APS_PPP_LINK_STATUS_ENUM
{
    TAF_APS_PPP_LINK_NOT_EXISTED             = 0x00,                                 /* 链路不存在 */
    TAF_APS_PPP_LINK_CONNING                 = 0x01,                                 /* 建链过程中 */
    TAF_APS_PPP_LINK_DISCING                 = 0x02,                                 /* 断链过程中 */
    TAF_APS_PPP_LINK_CONNECTED               = 0x03,                                 /* 链路存在 */

    TAF_APS_PPP_LINK_STATUS_BUTT
};

typedef VOS_UINT8 TAF_APS_PPP_LINK_STATUS_ENUM_UINT8;

/*****************************************************************************
 枚举名    : TAF_APS_PPP_AUTH_TYPE_ENUM
 结构说明  : 鉴权类型枚举
 1.日    期   : 2015年11月09日
   作    者   : g00261581
   修改内容   : 新建
*****************************************************************************/
enum TAF_APS_PPP_AUTH_TYPE_ENUM
{
    TAF_APS_PPP_AUTH_TYPE_NONE              = 0x00,
    TAF_APS_PPP_AUTH_TYPE_PAP               = 0x01,
    TAF_APS_PPP_AUTH_TYPE_CHAP              = 0x02,
    TAF_APS_PPP_AUTH_TYPE_PAP_OR_CHAP       = 0x03,

    TAF_APS_PPP_AUTH_TYPE_BUTT
};

typedef VOS_UINT8 TAF_APS_PPP_AUTH_TYPE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : TAF_APS_PPP_NAI_FROM_ENUM
 结构说明  : 鉴权参数来源枚举
 1.日    期   : 2015年11月09日
   作    者   : y00322978
   修改内容   : 新建
*****************************************************************************/
enum TAF_APS_PPP_NAI_FROM_ENUM
{
    TAF_APS_PPP_NAI_FROM_AP              = 0x00,
    TAF_APS_PPP_NAI_FROM_MODEM           = 0x01,

    TAF_APS_PPP_NAI_FROM_BUTT
};

typedef VOS_UINT32 TAF_APS_PPP_NAI_FROM_ENUM_UINT32;
/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : TAF_APS_PPP_IPV4_DNS_STRU
 *
 * Description : IPV4 TYPE ADDR.
 *******************************************************************************/
typedef struct
{
    VOS_UINT32                          bitOpIpv4PrimDNS:1;
    VOS_UINT32                          bitOpIpv4SecDNS:1;
    VOS_UINT32                          bitOpSpare:30;
    VOS_UINT8                           aucIpv4PrimDNS[TAF_APS_PPP_IPV4_ADDR_LEN];
    VOS_UINT8                           aucIpv4SecDNS[TAF_APS_PPP_IPV4_ADDR_LEN];
} TAF_APS_PPP_IPV4_DNS_STRU;

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : APS_PPP_ACT_REQ_STRU
 *
 * Description : After traffic channel is connected in CDMA mode, Aps notify
 * PPP to negotiate,.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                       /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_RAT_MODE_ENUM_UINT8                         enMode;
    TAF_APS_PPP_ADDR_TYPE_ENUM_UINT8                        enPdnType;
    TAF_APS_PPP_AUTH_TYPE_ENUM_UINT8                        enAuthType;
    VOS_UINT8                                               aucUserName[TAF_APS_PPP_MAX_AUTHDATA_USERNAME_LEN+1];
    VOS_UINT8                                               aucPassword[TAF_APS_PPP_MAX_AUTHDATA_PASSWORD_LEN+1];
    TAF_APS_PPP_NAI_FROM_ENUM_UINT32                        ulNaiSource;
} APS_PPP_ACT_REQ_STRU;

/** ****************************************************************************
 * Name        : PPP_APS_ACT_CNF_STRU
 *
 * Description : PPP send result of PPP negotiation to Aps. Result is VOS_OK
 * or VOS_ERR.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT32                                              ulResult;                               /**< VOS_OK or VOS_ERR */
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_ADDR_TYPE_ENUM_UINT8                        enPdnType;
    VOS_UINT16                                              usMtu;
    VOS_UINT8                                               aucIpv4Addr[TAF_APS_PPP_IPV4_ADDR_LEN];
    VOS_UINT8                                               aucIpv6Addr[TAF_APS_PPP_IPV6_ADDR_LEN];
    TAF_APS_PPP_IPV4_DNS_STRU                               stIpv4Dns;
} PPP_APS_ACT_CNF_STRU;

/** ****************************************************************************
 * Name        : APS_PPP_DEACT_REQ_STRU
 *
 * Description : When AT receive PDP disconnect request, Aps notify PPP to
 * terminate PPP.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                       /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_RAT_MODE_ENUM_UINT8                         enMode;
    VOS_UINT8                                               aucReserved[2];
} APS_PPP_DEACT_REQ_STRU;

/** ****************************************************************************
 * Name        : PPP_APS_DEACT_CNF_STRU
 *
 * Description : PPP send result of PPP termination to Aps. Result is VOS_OK
 * or VOS_ERR.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                       /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT32                                              ulResult;       /**< VOS_OK or VOS_ERR */
    VOS_UINT8                                               ucPdnId;
    VOS_UINT8                                               aucReserved[3];
} PPP_APS_DEACT_CNF_STRU;

/** ****************************************************************************
 * Name        : APS_PPP_DEACT_IND_STRU
 *
 * Description : APS notify PPP, disconnected locally.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                       /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_RAT_MODE_ENUM_UINT8                         enMode;
    VOS_UINT8                                               aucReserved[2];
} APS_PPP_DEACT_IND_STRU;

/** ****************************************************************************
 * Name        : PPP_APS_DEACT_NTF_STRU
 *
 * Description : PPP notify PPP is disconnected by NW. Aps need to disconnect
 * traffic channel. Result is VOS_OK or VOS_ERR.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                       /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_RAT_MODE_ENUM_UINT8                         enMode;
    VOS_UINT8                                               aucReserved[2];
} PPP_APS_DEACT_NTF_STRU;

/** ****************************************************************************
 * Name        : PPP_APS_PPP_RENEGO_IND_STRU
 *
 * Description : PPP notify APS PPP need re-nego
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                       /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    VOS_UINT8                                               aucReserved[3];
} PPP_APS_PPP_RENEGO_IND_STRU;
/** ****************************************************************************
 * Name        : PPP_APS_MODIFY_IND_STRU
 *
 * Description : PPP send result of PPP negotiation to Aps. Result is VOS_OK
 * or VOS_ERR.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_ADDR_TYPE_ENUM_UINT8                        enPdnType;
    VOS_UINT16                                              usMtu;
    VOS_UINT8                                               aucIpv4Addr[TAF_APS_PPP_IPV4_ADDR_LEN];
    VOS_UINT8                                               aucIpv6Addr[TAF_APS_PPP_IPV6_ADDR_LEN];
    TAF_APS_PPP_IPV4_DNS_STRU                               stIpv4Dns;
} PPP_APS_MODIFY_IND_STRU;

/** ****************************************************************************
 * Name        : APS_PPP_MODE_CHANGE_NTF_STRU
 *
 * Description : APS NOTIFY PPP THE RAT MODE CHANGED.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_RAT_MODE_ENUM_UINT8                         enMode;
    VOS_UINT8                                               aucReserved[2];
} APS_PPP_MODE_CHANGE_NTF_STRU;


/** ****************************************************************************
 * Name        : APS_PPP_DIAL_MODE_NTF_STRU
 *
 * Description : APS NOTIFY PPP THE DIAL MODE WHICH AT SET.
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT16                                              usClientId;
    TAF_APS_PPP_CDATA_DIAL_MODE_ENUM_UINT8                  enDialMode;
    VOS_UINT8                                               aucReserved[1];

} APS_PPP_DIAL_MODE_NTF_STRU;

/** ****************************************************************************
 * Name        : PPP_APS_RECONN_IND_STRU
 *
 * Description : PPP NOTIFY APS RECONNECT IND MSG
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    VOS_UINT8                                               aucReserved[3];
}PPP_APS_RECONN_IND_STRU;

/** ****************************************************************************
 * Name        : APS_PPP_LINK_STATUS_NTF_STRU
 *
 * Description : APS NOTIFY PPP LINK STATUS NTF MSG
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                                              /* _H2ASN_Skip */
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;            /* _H2ASN_Skip */
    VOS_UINT16                                              usOpId;
    VOS_UINT8                                               ucPdnId;
    TAF_APS_PPP_LINK_STATUS_ENUM_UINT8                      enLinkStatus;
    VOS_UINT8                                               aucReserved[2];
}APS_PPP_LINK_STATUS_NTF_STRU;

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/
TAF_APS_PPP_LINK_STATUS_ENUM_UINT8 TAF_APS_GetPppLinkStatus(VOS_VOID);

/** ****************************************************************************
 * Name        : TAF_APS_PPP_PIF_MSG_DATA
 *
 * Description : H2ASN top level message structure definition
 *******************************************************************************/
typedef struct
{
    TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16                    enMsgId;     /* _H2ASN_MsgChoice_Export TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16 */
    VOS_UINT8                                               aucMsgBlock[2];

    /* _H2ASN_MsgChoice_When_Comment TAF_APS_PPP_PIF_MSG_TYPE_ENUM_UINT16 */
}TAF_APS_PPP_PIF_MSG_DATA;

/* _H2ASN_Length UINT32*/
/** ****************************************************************************
 * Name        : TAF_APS_PPP_PIF
 *
 * Description : H2ASN top level message structure definition
 *******************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    TAF_APS_PPP_PIF_MSG_DATA            stMsgData;
}Taf_aps_ppp_pif_MSG;


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
