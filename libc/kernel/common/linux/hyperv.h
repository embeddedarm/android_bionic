/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _HYPERV_H
#define _HYPERV_H
#include <linux/types.h>
#define VSS_OP_REGISTER 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hv_vss_op {
 VSS_OP_CREATE = 0,
 VSS_OP_DELETE,
 VSS_OP_HOT_BACKUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VSS_OP_GET_DM_INFO,
 VSS_OP_BU_COMPLETE,
 VSS_OP_FREEZE,
 VSS_OP_THAW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VSS_OP_AUTO_RECOVER,
 VSS_OP_COUNT
};
struct hv_vss_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 operation;
 __u8 reserved[7];
} __attribute__((packed));
#define VSS_HBU_NO_AUTO_RECOVERY 0x00000005
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hv_vss_check_feature {
 __u32 flags;
} __attribute__((packed));
struct hv_vss_check_dm_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 flags;
} __attribute__((packed));
struct hv_vss_msg {
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hv_vss_hdr vss_hdr;
 int error;
 };
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hv_vss_check_feature vss_cf;
 struct hv_vss_check_dm_info dm_info;
 };
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HV_KVP_EXCHANGE_MAX_VALUE_SIZE (2048)
#define HV_KVP_EXCHANGE_MAX_KEY_SIZE (512)
#define REG_SZ 1
#define REG_U32 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REG_U64 8
#define KVP_OP_REGISTER 4
#define KVP_OP_REGISTER1 100
enum hv_kvp_exchg_op {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KVP_OP_GET = 0,
 KVP_OP_SET,
 KVP_OP_DELETE,
 KVP_OP_ENUMERATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KVP_OP_GET_IP_INFO,
 KVP_OP_SET_IP_INFO,
 KVP_OP_COUNT
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum hv_kvp_exchg_pool {
 KVP_POOL_EXTERNAL = 0,
 KVP_POOL_GUEST,
 KVP_POOL_AUTO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 KVP_POOL_AUTO_EXTERNAL,
 KVP_POOL_AUTO_INTERNAL,
 KVP_POOL_COUNT
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HV_S_OK 0x00000000
#define HV_E_FAIL 0x80004005
#define HV_S_CONT 0x80070103
#define HV_ERROR_NOT_SUPPORTED 0x80070032
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HV_ERROR_MACHINE_LOCKED 0x800704F7
#define HV_ERROR_DEVICE_NOT_CONNECTED 0x8007048F
#define HV_INVALIDARG 0x80070057
#define HV_GUID_NOTFOUND 0x80041002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ADDR_FAMILY_NONE 0x00
#define ADDR_FAMILY_IPV4 0x01
#define ADDR_FAMILY_IPV6 0x02
#define MAX_ADAPTER_ID_SIZE 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_IP_ADDR_SIZE 1024
#define MAX_GATEWAY_SIZE 512
struct hv_kvp_ipaddr_value {
 __u16 adapter_id[MAX_ADAPTER_ID_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 addr_family;
 __u8 dhcp_enabled;
 __u16 ip_addr[MAX_IP_ADDR_SIZE];
 __u16 sub_net[MAX_IP_ADDR_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 gate_way[MAX_GATEWAY_SIZE];
 __u16 dns_addr[MAX_IP_ADDR_SIZE];
} __attribute__((packed));
struct hv_kvp_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 operation;
 __u8 pool;
 __u16 pad;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hv_kvp_exchg_msg_value {
 __u32 value_type;
 __u32 key_size;
 __u32 value_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 key[HV_KVP_EXCHANGE_MAX_KEY_SIZE];
 union {
 __u8 value[HV_KVP_EXCHANGE_MAX_VALUE_SIZE];
 __u32 value_u32;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 value_u64;
 };
} __attribute__((packed));
struct hv_kvp_msg_enumerate {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 index;
 struct hv_kvp_exchg_msg_value data;
} __attribute__((packed));
struct hv_kvp_msg_get {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hv_kvp_exchg_msg_value data;
};
struct hv_kvp_msg_set {
 struct hv_kvp_exchg_msg_value data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hv_kvp_msg_delete {
 __u32 key_size;
 __u8 key[HV_KVP_EXCHANGE_MAX_KEY_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hv_kvp_register {
 __u8 version[HV_KVP_EXCHANGE_MAX_KEY_SIZE];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hv_kvp_msg {
 union {
 struct hv_kvp_hdr kvp_hdr;
 int error;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 union {
 struct hv_kvp_msg_get kvp_get;
 struct hv_kvp_msg_set kvp_set;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hv_kvp_msg_delete kvp_delete;
 struct hv_kvp_msg_enumerate kvp_enum_data;
 struct hv_kvp_ipaddr_value kvp_ip_val;
 struct hv_kvp_register kvp_register;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } body;
} __attribute__((packed));
struct hv_kvp_ip_msg {
 __u8 operation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pool;
 struct hv_kvp_ipaddr_value kvp_ip_val;
} __attribute__((packed));
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
