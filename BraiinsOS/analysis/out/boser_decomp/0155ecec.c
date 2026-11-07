// FUN_0155ecec @ 0155ecec size=300 calls_out=5 calls_in=0
// strings: 

void FUN_0155ecec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  FUN_013208dc(&local_58,&DAT_004a5d58,param_2,param_3);
  if (local_58 == -0x80000000) {
    FUN_00665974(&local_24,param_2,param_3);
    iVar1 = local_20;
    FUN_013208dc(&local_68,&DAT_004a5d58,local_20,local_1c);
    FUN_019bb7e0(local_24,iVar1);
  }
  else {
    local_68 = local_58;
    iStack_64 = iStack_54;
    iStack_60 = iStack_50;
  }
  iVar1 = iStack_60;
  if (local_68 == -0x80000000) {
    *param_1 = -0x80000000;
  }
  else {
    local_48 = local_68;
    local_44 = iStack_64;
    local_40 = iStack_60;
    FUN_012fbd94(&local_24,iStack_64,iStack_60);
    if (local_24 == 0) {
      local_40 = local_44;
      local_44 = local_48;
    }
    else {
      iVar1 = local_20;
      if (local_48 != -0x80000000) {
        local_30 = local_40;
        local_34 = local_44;
        local_2c = local_20;
        local_38 = local_48;
        local_28 = local_1c;
        iVar1 = FUN_015964a4(&local_38);
        *param_1 = -0x7fffffff;
        param_1[1] = iVar1;
        return;
      }
    }
    *param_1 = local_44;
    param_1[1] = local_40;
    param_1[2] = iVar1;
  }
  return;
}

