// FUN_0150568c @ 0150568c size=132 calls_out=0 calls_in=1
// strings: 

undefined1 * FUN_0150568c(undefined1 *param_1,int param_2,short param_3)

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
        goto switchD_015056d0_caseD_0;
      case 2:
        break;
      case 4:
        sVar1 = 0x10;
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
      case 0xe:
        sVar1 = 0x19;
        break;
      case 0x10:
        sVar1 = *(short *)(param_1 + 0x10);
      }
      if (sVar1 == param_3) {
        return param_1;
      }
switchD_015056d0_caseD_0:
      param_2 = param_2 + -0x14;
      param_1 = param_1 + 0x14;
    } while (param_2 != 0);
  }
  return (undefined1 *)0x0;
}

