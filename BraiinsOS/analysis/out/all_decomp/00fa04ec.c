// FUN_00fa04ec @ 00fa04ec size=256 calls_out=3 calls_in=19
// strings: 

void FUN_00fa04ec(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined *local_2c;
  undefined **local_28;
  undefined4 *local_24;
  
  local_50 = 0;
  local_58 = 0;
  uStack_54 = 1;
  iVar1 = *(int *)(param_2 + 4);
  local_48 = *(undefined4 *)(iVar1 + 0x1c);
  uStack_44 = *(undefined4 *)(iVar1 + 0x20);
  uStack_40 = *(undefined4 *)(iVar1 + 0x24);
  local_3c = *(undefined2 *)(iVar1 + 0x28);
  local_38 = &DAT_005685c8;
  if (((*(char *)(iVar1 + 0x1c) == '\x03' && *(char *)(iVar1 + 0x20) == '\x03') &&
      *(char *)(iVar1 + 0x24) == '\x03') && *(short *)(iVar1 + 0x28) == 0) {
    local_38 = (undefined *)0x1;
    local_34 = 0;
  }
  else {
    local_34 = 4;
  }
  local_28 = &local_38;
  local_30 = &local_48;
  local_24 = &DAT_0157d360;
  local_2c = &DAT_00602db0;
  FUN_00fa948c(&local_58,&DAT_01880954,&DAT_00598951,&local_30);
  FUN_00f9d8b8(param_2,&local_58,param_3,param_4);
  FUN_00f9a3e0(&local_58);
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = local_50;
  return;
}

