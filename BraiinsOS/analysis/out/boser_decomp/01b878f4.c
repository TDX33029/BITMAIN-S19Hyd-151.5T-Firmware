// FUN_01b878f4 @ 01b878f4 size=552 calls_out=0 calls_in=2
// strings: /system/cpu/cpu0/cache

void FUN_01b878f4(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0x192 < param_2) {
    if (0x3f8 < param_2) goto switchD_01b87a88_caseD_3eb;
    if (param_2 < 0x3ed) {
      if (param_2 != 500) {
        switch(param_2) {
        case 1000:
          goto switchD_01b87a88_caseD_3e8;
        case 0x3e9:
          uVar3 = 0;
          uVar2 = 3;
          uVar1 = 0;
          break;
        case 0x3ea:
switchD_01b879b8_default:
          goto LAB_01b879d8;
        default:
          goto switchD_01b87a88_caseD_3eb;
        case 0x3ec:
          uVar3 = 0;
          uVar2 = 0x7fffffff;
          uVar1 = 0;
        }
        goto LAB_01b87980;
      }
    }
    else if ((1 << (param_2 - 0x3ed & 0xff) & 0x29fU) == 0) {
      if ((1 << (param_2 - 0x3ed & 0xff) & 0x960U) == 0) {
        uVar1 = 0x400;
        goto LAB_01b87ad0;
      }
LAB_01b879d8:
      uVar1 = 0;
      uVar2 = 2;
      uVar3 = uVar1;
      goto LAB_01b87980;
    }
switchD_01b87a88_caseD_3e8:
    uVar2 = 1;
    uVar1 = 0;
    uVar3 = 0;
    goto LAB_01b87980;
  }
  if (399 < param_2) {
    uVar2 = 0;
    uVar1 = uVar2;
    uVar3 = uVar2;
    goto LAB_01b87980;
  }
  if (0x6b < param_2) {
    if (param_2 < 0xa5) {
      if (0x9f < param_2) {
        switch(param_2) {
        case 0xa1:
          goto switchD_01b879f8_caseD_66;
        case 0xa2:
          uVar3 = 0;
          uVar1 = 4;
          uVar2 = 0x1000;
          break;
        case 0xa3:
          uVar3 = 0;
          uVar1 = 1;
          uVar2 = 8;
          break;
        case 0xa4:
          uVar3 = 0;
          uVar2 = 0x18;
          uVar1 = 0;
          break;
        default:
          goto switchD_01b879b8_default;
        }
        goto LAB_01b87980;
      }
      if (param_2 == 0x82) {
        uVar1 = 0x53c;
        goto LAB_01b87ad0;
      }
    }
    else if (param_2 - 200 < 3) goto switchD_01b87a88_caseD_3e8;
switchD_01b87a88_caseD_3eb:
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xffffffd8;
    goto LAB_01b87980;
  }
  if (param_2 < 100) {
    if (param_2 == 10) goto switchD_01b87a88_caseD_3e8;
    goto switchD_01b87a88_caseD_3eb;
  }
  switch(param_2) {
  case 0x65:
    uVar1 = 10;
    goto LAB_01b87a08;
  case 0x66:
switchD_01b879f8_caseD_66:
    uVar1 = 6;
LAB_01b87a08:
    uVar3 = 0;
    uVar2 = 0x1e;
    break;
  case 0x67:
    uVar1 = 6;
    goto LAB_01b87aa4;
  case 0x68:
    uVar1 = 1;
LAB_01b87aa4:
    uVar3 = 0;
    uVar2 = 0x1d;
    break;
  case 0x69:
    uVar3 = 0;
    uVar1 = 3;
    uVar2 = 7;
    break;
  case 0x6a:
    uVar1 = 0;
LAB_01b87ad0:
    uVar2 = 0x20000;
    uVar3 = 0;
    break;
  case 0x6b:
    uVar3 = 0;
    uVar1 = 1;
    uVar2 = 9;
    break;
  default:
    uVar1 = 0xfffe0000;
    uVar2 = 0x16;
    uVar3 = 0;
  }
LAB_01b87980:
  *param_1 = uVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}

