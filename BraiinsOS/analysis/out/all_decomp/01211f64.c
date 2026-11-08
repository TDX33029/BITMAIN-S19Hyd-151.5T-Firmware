// FUN_01211f64 @ 01211f64 size=308 calls_out=5 calls_in=0
// strings: 

void FUN_01211f64(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_00fdb110(&local_40,&DAT_0038c1c7,param_2,param_3);
  if (local_40 == -0x80000000) {
    FUN_00601e84(&local_24,param_2,param_3);
    iVar1 = local_20;
    FUN_00fdb110(&local_50,&DAT_0038c1c7,local_20,local_1c);
    local_30 = local_50;
    local_2c = iStack_4c;
    iVar2 = iStack_48;
    if (local_24 != 0) {
      thunk_FUN_016d3fb4(iVar1);
      local_30 = local_50;
      local_2c = iStack_4c;
      iVar2 = iStack_48;
    }
  }
  else {
    local_30 = local_40;
    local_2c = iStack_3c;
    iVar2 = iStack_38;
  }
  if (local_30 == -0x80000000) {
    *param_1 = -0x80000000;
    return;
  }
  local_28 = iVar2;
  FUN_00fab1e0(&local_24,local_2c,iVar2);
  local_14 = local_1c;
  local_18 = local_20;
  if (local_24 == 0) {
    local_28 = local_2c;
    local_2c = local_30;
  }
  else {
    iVar2 = local_20;
    if (local_30 != -0x80000000) {
      local_1c = local_28;
      local_20 = local_2c;
      local_24 = local_30;
      iVar2 = FUN_011f1a58(&local_24);
      *param_1 = -0x7fffffff;
      param_1[1] = iVar2;
      return;
    }
  }
  *param_1 = local_2c;
  param_1[1] = local_28;
  param_1[2] = iVar2;
  return;
}

