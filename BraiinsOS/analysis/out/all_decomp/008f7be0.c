// FUN_008f7be0 @ 008f7be0 size=480 calls_out=3 calls_in=2
// strings: 

void FUN_008f7be0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 local_30 [8];
  uint local_28;
  uint local_24;
  undefined1 uStack_19;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    uVar1 = (uint)(byte)param_2[1];
    goto LAB_008f7ce4;
  case 2:
    uVar1 = (uint)(ushort)param_2[1];
    goto LAB_008f7ce4;
  case 3:
    uVar1 = param_2[1];
LAB_008f7ce4:
    *param_1 = 2;
    param_1[1] = uVar1;
    FUN_008f7448(param_2);
    return;
  case 4:
    local_24 = param_2[3];
    local_28 = param_2[2];
    if (local_24 == 0) {
LAB_008f7cc8:
      *param_1 = 2;
      param_1[1] = local_28;
      FUN_008f7448(param_2);
      return;
    }
    local_30[0] = 1;
    FUN_00924358(param_1,local_30,&uStack_19,&DAT_01867c08);
    break;
  case 5:
    local_28 = (uint)(char)param_2[1];
    if (local_28 < 0x80000000) {
LAB_008f7d44:
      *param_1 = 2;
      param_1[1] = local_28;
      FUN_008f7448(param_2);
      return;
    }
    local_30[0] = 2;
    local_24 = (int)local_28 >> 0x1f;
    FUN_00924358(param_1,local_30,&uStack_19,&DAT_01867c08);
    break;
  case 6:
    local_28 = (uint)(short)param_2[1];
    if (local_28 < 0x80000000) goto LAB_008f7d44;
    local_30[0] = 2;
    local_24 = (int)local_28 >> 0x1f;
    FUN_00924358(param_1,local_30,&uStack_19,&DAT_01867c08);
    break;
  case 7:
    local_28 = param_2[1];
    if (-1 < (int)local_28) goto LAB_008f7d44;
    local_30[0] = 2;
    local_24 = (int)local_28 >> 0x1f;
    FUN_00924358(param_1,local_30,&uStack_19,&DAT_01867c08);
    break;
  case 8:
    local_24 = param_2[3];
    local_28 = param_2[2];
    if (local_24 == 0) goto LAB_008f7cc8;
    local_30[0] = 2;
    FUN_00924358(param_1,local_30,&uStack_19,&DAT_01867c08);
    break;
  default:
    FUN_008f73e8(param_1,param_2,&uStack_19,&DAT_01867c08);
    return;
  }
  FUN_008f7448(param_2);
  return;
}

