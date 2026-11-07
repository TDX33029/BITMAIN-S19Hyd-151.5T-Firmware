// FUN_013d9450 @ 013d9450 size=364 calls_out=0 calls_in=2
// strings: 

longlong FUN_013d9450(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  switch(uVar1) {
  case 0:
    return CONCAT44(param_1,0x25);
  case 1:
    return (ulonglong)param_1 << 0x20;
  case 2:
    return CONCAT44(param_1,0x13);
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x24:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2d:
  case 0x31:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3f:
    goto switchD_013d946c_caseD_3;
  case 5:
    return CONCAT44(param_1,9);
  case 6:
    return CONCAT44(param_1,0x1d);
  case 10:
    return CONCAT44(param_1,0x17);
  case 0xc:
    return CONCAT44(param_1,0x1a);
  case 0xd:
    return CONCAT44(param_1,0xd);
  case 0xf:
    return CONCAT44(param_1,0x11);
  case 0x10:
    return CONCAT44(param_1,0x23);
  case 0x18:
    return CONCAT44(param_1,0x1c);
  case 0x19:
    return CONCAT44(param_1,0x10);
  case 0x1c:
    return CONCAT44(param_1,1);
  case 0x21:
    return CONCAT44(param_1,0x1e);
  case 0x23:
    return CONCAT44(param_1,0x12);
  case 0x25:
    return CONCAT44(param_1,8);
  case 0x29:
    return CONCAT44(param_1,0x19);
  case 0x2b:
    return CONCAT44(param_1,0xc);
  case 0x2c:
    return CONCAT44(param_1,0x1f);
  case 0x2e:
    return CONCAT44(param_1,0x1b);
  case 0x2f:
    return CONCAT44(param_1,0x14);
  case 0x30:
    return CONCAT44(param_1,0xb);
  case 0x32:
    return CONCAT44(param_1,0x15);
  case 0x33:
    return CONCAT44(param_1,0x16);
  case 0x34:
    return CONCAT44(param_1,0x21);
  case 0x3b:
    return CONCAT44(param_1,6);
  case 0x3c:
    return CONCAT44(param_1,7);
  case 0x3d:
    return CONCAT44(param_1,0x18);
  case 0x3e:
    return CONCAT44(param_1,10);
  case 0x40:
    return CONCAT44(param_1,0x20);
  case 0x41:
    return CONCAT44(param_1,0xe);
  default:
    switch(uVar1) {
    case 0xfa:
      return CONCAT44(param_1,0x22);
    case 0xfb:
      return CONCAT44(param_1,0xf);
    case 0xfc:
      return CONCAT44(param_1,4);
    case 0xfd:
    case 0xfe:
    case 0x100:
      break;
    case 0xff:
      return CONCAT44(param_1,3);
    case 0x101:
      return CONCAT44(param_1,5);
    default:
      if (uVar1 == 0xff19) {
        return CONCAT44(param_1,2);
      }
    }
switchD_013d946c_caseD_3:
    return CONCAT44(param_1,0x24);
  }
}

