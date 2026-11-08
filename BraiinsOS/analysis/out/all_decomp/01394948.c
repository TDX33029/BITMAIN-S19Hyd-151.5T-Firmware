// FUN_01394948 @ 01394948 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_01394948(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  puStack_1c = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puStack_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,8);
  }
  *puStack_1c = param_3;
  local_14 = local_14 & 0xffffff00;
  puStack_1c[1] = param_4;
  uStack_18 = 1;
  local_20 = 1;
  FUN_013944d0(&local_20);
  *param_1 = local_20;
  param_1[1] = puStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = local_14;
  return;
}

