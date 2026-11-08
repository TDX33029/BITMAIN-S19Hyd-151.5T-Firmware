// FUN_005ef5e8 @ 005ef5e8 size=388 calls_out=0 calls_in=45
// strings: 

undefined1 FUN_005ef5e8(undefined1 *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar1 = 0x22;
    switch(*(undefined4 *)(param_1 + 4)) {
    case 1:
    case 0xd:
      return 1;
    case 2:
      return 0;
    case 3:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xe:
    case 0xf:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x21:
    case 0x22:
    case 0x25:
      return 0x29;
    case 4:
      return 0x23;
    case 7:
      break;
    case 0xb:
      return 0xd;
    case 0xc:
      return 0x26;
    case 0x10:
      return 0x1c;
    case 0x11:
      return 0xc;
    case 0x12:
      return 0x1f;
    case 0x14:
      return 0xe;
    case 0x15:
      return 0xf;
    case 0x16:
      return 0x14;
    case 0x1a:
      return 0x1d;
    case 0x1b:
      return 0x1b;
    case 0x1c:
      return 0x18;
    case 0x1d:
      return 0x19;
    case 0x1e:
      return 0x11;
    case 0x1f:
      return 0x20;
    case 0x20:
      return 0xb;
    case 0x23:
      return 0x1e;
    case 0x24:
      return 0x21;
    case 0x26:
switchD_005ef630_caseD_26:
      return 0x24;
    case 0x27:
      return 0x10;
    case 0x28:
      return 0x12;
    default:
      switch(*(undefined4 *)(param_1 + 4)) {
      case 0x5f:
        goto switchD_005ef630_caseD_26;
      default:
        return 0x29;
      case 0x62:
        return 8;
      case 99:
        return 9;
      case 100:
        return 10;
      case 0x65:
        return 5;
      case 0x67:
        return 6;
      case 0x68:
        return 3;
      case 0x6b:
        return 7;
      case 0x6e:
        return 0x16;
      case 0x6f:
        return 2;
      case 0x71:
        return 4;
      case 0x73:
        return 0x27;
      case 0x74:
        return 0x13;
      case 0x7a:
        return 0x1a;
      }
    }
  case 1:
    return param_1[1];
  default:
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 4) + 8);
  }
  return uVar1;
}

