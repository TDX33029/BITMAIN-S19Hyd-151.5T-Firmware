// FUN_0093fac0 @ 0093fac0 size=484 calls_out=3 calls_in=3
// strings: 

void FUN_0093fac0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint in_fpscr;
  int local_50;
  uint local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined1 uStack_19;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  if (uVar1 == 0x10) {
LAB_0093faf0:
    *param_1 = 2;
    param_1[1] = 0;
    return;
  }
  if (uVar1 != 0x11) {
    if (uVar1 == 0x12) goto LAB_0093faf0;
    switch(uVar1) {
    case 1:
      goto switchD_0093fb6c_caseD_1;
    case 2:
      goto switchD_0093fb6c_caseD_2;
    case 3:
      goto switchD_0093fb6c_caseD_3;
    case 4:
      goto switchD_0093fb6c_caseD_4;
    case 5:
      goto switchD_0093fb6c_caseD_5;
    case 6:
      goto switchD_0093fb6c_caseD_6;
    case 7:
      goto switchD_0093fb6c_caseD_7;
    case 8:
      goto switchD_0093fb6c_caseD_8;
    case 9:
      goto switchD_0093fb6c_caseD_9;
    case 10:
      goto switchD_0093fb6c_caseD_a;
    default:
      FUN_008f7820(&local_50,param_2,&uStack_19,&DAT_018673b8);
      if (local_50 != 2) {
        *param_1 = local_50;
        param_1[1] = local_4c;
        param_1[2] = iStack_48;
        param_1[3] = iStack_44;
        param_1[4] = iStack_40;
        param_1[5] = iStack_3c;
        param_1[6] = local_38;
        param_1[7] = iStack_34;
        param_1[8] = iStack_30;
        param_1[9] = iStack_2c;
        param_1[10] = iStack_28;
        param_1[0xb] = iStack_24;
        return;
      }
      goto LAB_0093fc4c;
    }
  }
  param_2 = (uint *)param_2[1];
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    goto switchD_0093fb6c_caseD_1;
  case 2:
switchD_0093fb6c_caseD_2:
    uVar1 = (uint)(ushort)param_2[1];
    goto LAB_0093fc0c;
  case 3:
switchD_0093fb6c_caseD_3:
    uVar1 = param_2[1];
LAB_0093fc0c:
    local_4c = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    goto LAB_0093fc4c;
  case 4:
switchD_0093fb6c_caseD_4:
    local_4c = FUN_0184589c(param_2[2],param_2[3]);
    goto LAB_0093fc4c;
  case 5:
switchD_0093fb6c_caseD_5:
    uVar1 = (uint)(char)param_2[1];
    break;
  case 6:
switchD_0093fb6c_caseD_6:
    uVar1 = (uint)(short)param_2[1];
    break;
  case 7:
switchD_0093fb6c_caseD_7:
    uVar1 = param_2[1];
    break;
  case 8:
switchD_0093fb6c_caseD_8:
    local_4c = FUN_01845fc8(param_2[2],param_2[3]);
    goto LAB_0093fc4c;
  case 9:
switchD_0093fb6c_caseD_9:
    local_4c = param_2[1];
    goto LAB_0093fc4c;
  case 10:
switchD_0093fb6c_caseD_a:
    uVar1 = 0xbf800000;
    if ((uint)((ulonglong)*(double *)(param_2 + 2) >> 0x20) < 0x80000000) {
      uVar1 = 0;
    }
    local_4c = (uint)ABS((float)*(double *)(param_2 + 2)) | uVar1 & 0x80000000;
    goto LAB_0093fc4c;
  default:
    FUN_008f7820(&local_50,param_2,&uStack_19,&DAT_018673b8);
    if (local_50 != 2) {
      *param_1 = local_50;
      param_1[1] = local_4c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      param_1[6] = local_38;
      param_1[7] = iStack_34;
      param_1[8] = iStack_30;
      param_1[9] = iStack_2c;
      param_1[10] = iStack_28;
      param_1[0xb] = iStack_24;
      return;
    }
    goto LAB_0093fc4c;
  }
  local_4c = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
LAB_0093fc4c:
  *param_1 = 2;
  param_1[2] = local_4c;
  param_1[1] = 1;
  return;
switchD_0093fb6c_caseD_1:
  uVar1 = (uint)(byte)param_2[1];
  goto LAB_0093fc0c;
}

