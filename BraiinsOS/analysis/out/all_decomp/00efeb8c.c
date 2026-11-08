// FUN_00efeb8c @ 00efeb8c size=236 calls_out=4 calls_in=2
// strings: 

void FUN_00efeb8c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *local_10;
  code *local_c;
  
  if (param_2[1] == 0) {
    *param_1 = 0;
    return;
  }
  param_2[1] = param_2[1] + -1;
  FUN_00efbe38(&local_38,*param_2);
  if (local_38 == 1) {
    *param_1 = 2;
    param_1[1] = local_34;
    return;
  }
  local_24 = local_2c;
  local_28 = local_30;
  if (local_2c == 0) {
    *param_1 = 1;
    param_1[1] = local_30;
    return;
  }
  local_c = FUN_00fac4cc;
  local_10 = &local_28;
  FUN_00600d2c(&local_20,&DAT_00584bb4,&local_10);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar1 = local_20;
  puVar1[1] = uStack_1c;
  puVar1[2] = uStack_18;
  *param_1 = 2;
  param_1[1] = puVar1;
  return;
}

