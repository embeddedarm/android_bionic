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
#ifndef __LINUX_USB_IRDA_H
#define __LINUX_USB_IRDA_H
#define USB_SUBCLASS_IRDA 0x02
#define USB_REQ_CS_IRDA_RECEIVING 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_REQ_CS_IRDA_CHECK_MEDIA_BUSY 3
#define USB_REQ_CS_IRDA_RATE_SNIFF 4
#define USB_REQ_CS_IRDA_UNICAST_LIST 5
#define USB_REQ_CS_IRDA_GET_CLASS_DESC 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_DT_CS_IRDA 0x21
#define USB_IRDA_DS_2048 (1 << 5)
#define USB_IRDA_DS_1024 (1 << 4)
#define USB_IRDA_DS_512 (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_DS_256 (1 << 2)
#define USB_IRDA_DS_128 (1 << 1)
#define USB_IRDA_DS_64 (1 << 0)
#define USB_IRDA_WS_7 (1 << 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_WS_6 (1 << 5)
#define USB_IRDA_WS_5 (1 << 4)
#define USB_IRDA_WS_4 (1 << 3)
#define USB_IRDA_WS_3 (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_WS_2 (1 << 1)
#define USB_IRDA_WS_1 (1 << 0)
#define USB_IRDA_MTT_0 (1 << 7)
#define USB_IRDA_MTT_10 (1 << 6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_MTT_50 (1 << 5)
#define USB_IRDA_MTT_100 (1 << 4)
#define USB_IRDA_MTT_500 (1 << 3)
#define USB_IRDA_MTT_1000 (1 << 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_MTT_5000 (1 << 1)
#define USB_IRDA_MTT_10000 (1 << 0)
#define USB_IRDA_BR_4000000 (1 << 8)
#define USB_IRDA_BR_1152000 (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_BR_576000 (1 << 6)
#define USB_IRDA_BR_115200 (1 << 5)
#define USB_IRDA_BR_57600 (1 << 4)
#define USB_IRDA_BR_38400 (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_BR_19200 (1 << 2)
#define USB_IRDA_BR_9600 (1 << 1)
#define USB_IRDA_BR_2400 (1 << 0)
#define USB_IRDA_AB_0 (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_AB_1 (1 << 6)
#define USB_IRDA_AB_2 (1 << 5)
#define USB_IRDA_AB_3 (1 << 4)
#define USB_IRDA_AB_6 (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_AB_12 (1 << 2)
#define USB_IRDA_AB_24 (1 << 1)
#define USB_IRDA_AB_48 (1 << 0)
#define USB_IRDA_RATE_SNIFF 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_irda_cs_descriptor {
 __u8 bLength;
 __u8 bDescriptorType;
 __le16 bcdSpecRevision;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bmDataSize;
 __u8 bmWindowSize;
 __u8 bmMinTurnaroundTime;
 __le16 wBaudRate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bmAdditionalBOFs;
 __u8 bIrdaRateSniff;
 __u8 bMaxUnicastList;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_IRDA_STATUS_MEDIA_BUSY (1 << 7)
#define USB_IRDA_STATUS_LINK_SPEED 0x0f
#define USB_IRDA_EXTRA_BOFS 0xf0
struct usb_irda_inbound_header {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bmStatus;
};
struct usb_irda_outbound_header {
 __u8 bmChange;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
