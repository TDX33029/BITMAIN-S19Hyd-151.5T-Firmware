// FUN_008f8320 @ 008f8320 size=368 calls_out=2 calls_in=4
// strings: 

void FUN_008f8320(int *param_1,uint *param_2)

{
  uint uVar1;
  int local_58;
  uint local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 local_28 [8];
  uint local_20;
  uint local_1c;
  undefined1 uStack_11;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    local_54 = (uint)(byte)param_2[1];
    goto LAB_008f8404;
  case 2:
    local_54 = (uint)(ushort)param_2[1];
    goto LAB_008f8404;
  case 3:
    local_54 = param_2[1];
    goto LAB_008f8404;
  case 4:
    local_20 = param_2[2];
    local_1c = param_2[3];
    if (local_1c == 0) goto LAB_008f83bc;
    local_28[0] = 1;
    goto LAB_008f8464;
  case 5:
    local_20 = (uint)(char)param_2[1];
    break;
  case 6:
    local_20 = (uint)(short)param_2[1];
    break;
  case 7:
    local_20 = param_2[1];
    break;
  case 8:
    local_20 = param_2[2];
    local_1c = param_2[3];
    if (local_1c != 0) {
      local_28[0] = 2;
      goto LAB_008f8464;
    }
LAB_008f83bc:
    local_58 = 2;
    local_54 = local_20;
    goto LAB_008f83f4;
  default:
    FUN_008f7820(&local_58,param_2,&uStack_11,&DAT_01867c08);
    goto LAB_008f83f4;
  }
  if ((int)local_20 < 0) {
    local_28[0] = 2;
    local_1c = (int)local_20 >> 0x1f;
LAB_008f8464:
    FUN_00924358(&local_58,local_28,&uStack_11,&DAT_01867c08);
  }
  else {
    local_58 = 2;
    local_54 = local_20;
  }
LAB_008f83f4:
  if (local_58 != 2) {
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = iStack_50;
    param_1[3] = iStack_4c;
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = iStack_3c;
    param_1[8] = iStack_38;
    param_1[9] = iStack_34;
    param_1[10] = iStack_30;
    param_1[0xb] = iStack_2c;
    return;
  }
LAB_008f8404:
  *param_1 = 2;
  param_1[1] = 1;
  param_1[2] = local_54;
  return;
}

