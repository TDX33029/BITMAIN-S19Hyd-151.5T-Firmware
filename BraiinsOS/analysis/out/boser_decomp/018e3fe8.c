// FUN_018e3fe8 @ 018e3fe8 size=176 calls_out=0 calls_in=2
// strings: 

undefined1 * FUN_018e3fe8(undefined1 *param_1,int param_2,short param_3)

{
  short sVar1;
  
  if (param_2 != 0) {
    param_2 = param_2 * 0x14;
    do {
      sVar1 = 0x17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*param_1) {
      default:
        goto switchD_018e4014_caseD_0;
      case 2:
        break;
      case 3:
        sVar1 = 0x26;
        break;
      case 4:
        sVar1 = 0x10;
        break;
      case 5:
        sVar1 = 0x22;
        break;
      case 6:
        sVar1 = 0x18;
        break;
      case 7:
        sVar1 = 0x15;
        break;
      case 9:
        sVar1 = 0x13;
        break;
      case 10:
        sVar1 = 0x12;
        break;
      case 0xb:
        sVar1 = 0x1a;
        break;
      case 0xc:
        sVar1 = 0x23;
        break;
      case 0xd:
        sVar1 = 0x27;
        break;
      case 0xe:
        sVar1 = 0x19;
        break;
      case 0xf:
        sVar1 = 0x28;
        break;
      case 0x10:
        sVar1 = *(short *)(param_1 + 0x10);
      }
      if (sVar1 == param_3) {
        return param_1;
      }
switchD_018e4014_caseD_0:
      param_2 = param_2 + -0x14;
      param_1 = param_1 + 0x14;
    } while (param_2 != 0);
  }
  return (undefined1 *)0x0;
}

