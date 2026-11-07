// FUN_00ad6a10 @ 00ad6a10 size=244 calls_out=5 calls_in=1
// strings: created | estimated_power_consumption

void FUN_00ad6a10(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_48 = 0x80000000;
  local_4c = 0;
  local_54 = 0;
  local_58 = 0;
  iVar1 = FUN_00a480e4(&local_58,"created",7,param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_00a46348(&local_58,&DAT_00531484,6,*(undefined4 *)(param_2 + 0x20),
                         *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                         *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    iVar1 = (int)uVar2;
    if (((iVar1 == 0) &&
        (iVar1 = FUN_00a48240((int)*(undefined8 *)(param_2 + 0x30),&local_58,
                              (int)((ulonglong)uVar2 >> 0x20),*(undefined4 *)(param_2 + 0x28),
                              *(undefined4 *)(param_2 + 0x2c)), iVar1 == 0)) &&
       (iVar1 = FUN_00a46348(&local_58,"estimated_power_consumption",0x1b,
                             *(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x38),
                             *(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),
                             *(undefined4 *)(param_2 + 0x44)), iVar1 == 0)) {
      local_38 = local_58;
      uStack_34 = local_54;
      uStack_30 = uStack_50;
      uStack_2c = local_4c;
      uStack_28 = local_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      FUN_0196ac88(param_1);
      return;
    }
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  FUN_0127464c(&local_58);
  return;
}

