// FUN_0161eda8 @ 0161eda8 size=208 calls_out=0 calls_in=1
// strings: 

uint FUN_0161eda8(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xff;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    return param_1;
  case 5:
  case 6:
  case 7:
    goto switchD_0161edc4_caseD_5;
  case 8:
    return 5;
  case 9:
    return 6;
  case 10:
    return 7;
  case 0xb:
    return 8;
  case 0xc:
    return 9;
  case 0xd:
    return 10;
  case 0xe:
    return 0xb;
  case 0xf:
    return 0xc;
  case 0x10:
    return 0xd;
  case 0x11:
    return 0xe;
  case 0x12:
    return 0xf;
  default:
    switch(uVar1) {
    case 0xba:
      return 0x11;
    case 0xbb:
      return 0x12;
    case 0xbc:
      return 0x13;
    case 0xbd:
      return 0x14;
    case 0xbe:
    case 0xbf:
      break;
    case 0xc0:
      return 0x15;
    default:
      if (uVar1 == 0x2a) {
        return 0x10;
      }
    }
switchD_0161edc4_caseD_5:
    return 0x16;
  }
}

