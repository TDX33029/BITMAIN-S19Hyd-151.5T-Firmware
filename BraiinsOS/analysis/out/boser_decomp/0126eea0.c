// FUN_0126eea0 @ 0126eea0 size=180 calls_out=4 calls_in=2
// strings: value

void FUN_0126eea0(undefined1 *param_1,int param_2)

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
  iVar1 = FUN_01271f48(&local_58,"key",3,*(undefined4 *)(param_2 + 0x1c),
                       *(undefined4 *)(param_2 + 0x20));
  if ((iVar1 == 0) && (iVar1 = FUN_01272118(&local_58,"value",5,param_2), iVar1 == 0)) {
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

