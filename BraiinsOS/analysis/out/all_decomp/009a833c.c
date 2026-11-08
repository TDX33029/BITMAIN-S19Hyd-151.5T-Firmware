// FUN_009a833c @ 009a833c size=148 calls_out=3 calls_in=0
// strings: 

void FUN_009a833c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *local_18;
  undefined **local_14;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  DataMemoryBarrier(0xb);
  if (DAT_018cd8e0 != 0) {
    local_14 = &local_18;
    local_18 = &DAT_018cd8a0;
    FUN_015eedc4(&DAT_018cd8e0,1,&local_14,&DAT_01869a78,&DAT_018ac9b8);
  }
  param_1[1] = puVar1;
  param_1[2] = 1;
  *param_1 = 1;
  *puVar1 = &DAT_018cd8a0;
  return;
}

