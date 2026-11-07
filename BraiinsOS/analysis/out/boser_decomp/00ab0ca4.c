// FUN_00ab0ca4 @ 00ab0ca4 size=168 calls_out=4 calls_in=2
// strings: seconds | nanos

void FUN_00ab0ca4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
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
  iVar1 = FUN_014a7850(&local_58,"seconds",7,param_4,param_3,param_4);
  if ((iVar1 == 0) && (iVar1 = FUN_014a7b90(&local_58,"nanos",5,param_5), iVar1 == 0)) {
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
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  FUN_0126ee34(&local_58);
  return;
}

