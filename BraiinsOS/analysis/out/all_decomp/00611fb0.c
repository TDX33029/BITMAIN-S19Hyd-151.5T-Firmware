// FUN_00611fb0 @ 00611fb0 size=352 calls_out=0 calls_in=2
// strings: 

void FUN_00611fb0(undefined4 *param_1,uint *param_2,uint param_3,byte param_4,uint param_5,
                 uint *param_6)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*param_6 & 0x3f) == 0) {
    uVar2 = param_6[2];
    uVar3 = param_6[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = uVar2;
    param_1[5] = uVar3;
    return;
  }
  if (*param_6 != 0xc) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if (param_5 <= param_3) {
    uVar2 = (uint)((ulonglong)param_4 * (ulonglong)param_6[2]);
    if ((int)((ulonglong)param_4 * (ulonglong)param_6[2] >> 0x20) != 0) {
      uVar1 = 0x38;
      goto switchD_00612094_caseD_2;
    }
    param_3 = param_3 - param_5;
    param_2 = (uint *)((int)param_2 + param_5);
    if (uVar2 <= param_3) {
      param_5 = param_4 - 1;
      uVar1 = 0x19;
      if (7 < param_5) goto switchD_00612094_caseD_2;
      param_2 = (uint *)((int)param_2 + uVar2);
      uVar3 = param_3 - uVar2;
      switch(param_5) {
      case 0:
        if (param_3 != uVar2) {
          uVar2 = (uint)(byte)*param_2;
          uVar3 = 0;
LAB_00612108:
          param_1[2] = 1;
          param_1[3] = 0;
          param_1[4] = uVar2;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[5] = uVar3;
          return;
        }
        break;
      case 1:
        if (1 < uVar3) {
          uVar2 = (uint)(ushort)*param_2;
          uVar3 = 0;
          goto LAB_00612108;
        }
        break;
      default:
        goto switchD_00612094_caseD_2;
      case 3:
        if (3 < uVar3) {
          uVar2 = *param_2;
          uVar3 = 0;
          goto LAB_00612108;
        }
        break;
      case 7:
        if (7 < uVar3) {
          uVar2 = *param_2;
          uVar3 = param_2[1];
          goto LAB_00612108;
        }
      }
    }
  }
  param_5 = 0;
  uVar1 = 0x13;
switchD_00612094_caseD_2:
  *(byte *)((int)param_1 + 9) = param_4;
  *(undefined1 *)(param_1 + 2) = uVar1;
  param_1[3] = param_2;
  param_1[4] = param_2;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[5] = param_5;
  return;
}

