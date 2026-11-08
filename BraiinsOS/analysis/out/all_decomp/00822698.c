// FUN_00822698 @ 00822698 size=196 calls_out=4 calls_in=1
// strings: 

void FUN_00822698(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00822778(&local_44);
  if ((char)local_44 == '\x01') {
    *param_1 = 0x80000000;
    param_1[1] = local_40;
    return;
  }
  uVar1 = local_44._1_1_;
  if ((param_2 & 0xff) == 0) {
    FUN_00822834(&local_44);
    if (local_44 == -0x80000000) {
      *param_1 = 0x80000000;
      param_1[1] = local_40;
      return;
    }
    iVar2 = local_44;
    uVar3 = local_40;
  }
  else {
    local_3c = 0;
    iVar2 = 0;
    uVar3 = 1;
  }
  local_38 = local_3c + 4;
  local_34 = uVar1;
  local_44 = iVar2;
  local_40 = uVar3;
  FUN_00873188(&local_30,&local_44,param_2);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(uVar3);
  return;
}

