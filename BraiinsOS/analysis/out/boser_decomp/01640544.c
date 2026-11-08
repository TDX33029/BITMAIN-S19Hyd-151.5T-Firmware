// FUN_01640544 @ 01640544 size=336 calls_out=7 calls_in=1
// strings: invalid IFLA_VRF_TABLE value

void FUN_01640544(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_r2;
  undefined8 uVar1;
  ushort local_4a;
  ushort *local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  ushort *local_38;
  int iStack_34;
  int iStack_30;
  ushort *local_28;
  code *local_24;
  int local_20;
  
  uVar1 = FUN_01623bf0(param_2,param_3);
  local_4a = FUN_01623bc0(param_2,param_3);
  if (local_4a == 1) {
    FUN_0160f300(&local_48,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
    if (local_48 == (ushort *)0x80000000) {
      local_28 = local_48;
      local_24 = (code *)local_44;
      local_20 = iStack_40;
    }
    else {
      local_38 = local_48;
      iStack_34 = local_44;
      iStack_30 = iStack_40;
      FUN_016403ac(&local_28,&local_38,"invalid IFLA_VRF_TABLE value",0x1c);
      local_44 = extraout_r2;
    }
    if (local_28 != (ushort *)0x80000000) {
      *param_1 = -0x7fffffff;
      param_1[1] = (int)local_28;
      param_1[2] = (int)local_24;
      goto LAB_01640688;
    }
    local_48 = (ushort *)0x80000000;
    iStack_40 = -0x80000000;
    local_20 = local_44;
  }
  else {
    FUN_01623ae4(&local_38,param_2,param_3);
    local_24 = FUN_012fcf18;
    local_28 = &local_4a;
    FUN_00664898(&local_48,&DAT_00585a33,&local_28);
    local_28 = local_48;
    local_24 = (code *)local_44;
    local_20 = iStack_40;
    FUN_0160f810(&local_48,&local_38,&local_28);
    local_24 = (code *)local_44;
    local_20 = iStack_3c;
    if (local_48 == (ushort *)0x80000000) {
      local_48 = (ushort *)0x80000001;
    }
  }
  *param_1 = (int)local_48;
  param_1[1] = (int)local_24;
  param_1[2] = iStack_40;
LAB_01640688:
  param_1[3] = local_20;
  return;
}

