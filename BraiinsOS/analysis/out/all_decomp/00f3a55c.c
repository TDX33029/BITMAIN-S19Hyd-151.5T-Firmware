// FUN_00f3a55c @ 00f3a55c size=220 calls_out=4 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00f3a55c(undefined4 *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  iVar1 = (*param_3)(param_2);
  if (iVar1 == 0) {
    *param_1 = 0x80000000;
    return;
  }
  local_1c = &DAT_0187e9a0;
  local_20 = &local_30;
  local_28 = 0;
  local_30 = 0;
  local_14 = 0;
  local_2c = 1;
  local_18 = &DAT_60000020;
  local_34 = iVar1;
  iVar2 = FUN_011f24f0(&local_34,&local_20);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_40,
                 &DAT_0187e9b8,&DAT_018af130);
  }
  local_40 = local_30;
  uStack_3c = local_2c;
  uStack_38 = local_28;
  FUN_00f3a6bc(iVar1);
  thunk_FUN_016d3fb4(iVar1);
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  return;
}

