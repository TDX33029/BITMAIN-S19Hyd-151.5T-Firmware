// FUN_013946c8 @ 013946c8 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_013946c8(undefined4 *param_1,undefined2 param_2)

{
  undefined4 local_20;
  undefined2 *puStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  puStack_1c = (undefined2 *)thunk_FUN_016d4a50(2);
  if (puStack_1c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,2);
  }
  *puStack_1c = param_2;
  local_14 = local_14 & 0xffffff00;
  uStack_18 = 1;
  local_20 = 1;
  FUN_01394744(&local_20);
  *param_1 = local_20;
  param_1[1] = puStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = local_14;
  return;
}

