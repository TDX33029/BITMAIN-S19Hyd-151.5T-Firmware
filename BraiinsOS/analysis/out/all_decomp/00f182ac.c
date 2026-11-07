// FUN_00f182ac @ 00f182ac size=476 calls_out=6 calls_in=2
// strings: 

void FUN_00f182ac(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  code *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined1 **local_18;
  undefined1 *local_14;
  
  FUN_00efbe38(&local_20);
  if (local_20 == (undefined4 *)0x1) {
    *param_1 = 3;
    param_1[1] = local_1c;
    return;
  }
  local_40 = local_18;
  iStack_3c = (int)local_14;
  if (local_14 != (undefined1 *)0x0) {
    local_24 = FUN_00fac4cc;
    local_28 = (undefined1 *)&local_40;
    FUN_00600d2c(&local_38,&DAT_00584bb4,&local_28);
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = local_30;
    *param_1 = 3;
    param_1[1] = puVar1;
    return;
  }
  switch(local_18) {
  case (undefined1 **)0x0:
    *param_1 = 0;
    return;
  case (undefined1 **)0x1:
    break;
  case (undefined1 **)0x2:
    FUN_00ed279c(&local_20,param_2);
    if (local_20 == (undefined4 *)0x0) {
      param_1[1] = local_1c;
      *param_1 = 3;
      return;
    }
    param_1[1] = local_20;
    param_1[2] = local_1c;
    param_1[3] = local_18;
    *param_1 = 2;
    return;
  default:
    local_30 = local_18;
    local_38 = CONCAT31(local_38._1_3_,1);
    local_18 = &local_28;
    local_20 = &local_38;
    local_2c = (int)local_14;
    local_24 = (code *)&DAT_018ab990;
    local_28 = &DAT_0187d080;
    local_14 = &LAB_0115452c;
    local_1c = &LAB_01579e10;
    uVar2 = FUN_00e94644(&DAT_0058e458,&local_20);
    *param_1 = 3;
    param_1[1] = uVar2;
    return;
  }
  FUN_00ed279c(&local_20,param_2);
  if (local_20 == (undefined4 *)0x0) {
    *param_1 = 3;
    param_1[1] = local_1c;
    return;
  }
  *param_1 = 1;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  param_1[3] = local_18;
  return;
}

