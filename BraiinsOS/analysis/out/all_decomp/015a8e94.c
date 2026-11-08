// FUN_015a8e94 @ 015a8e94 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_015a8e94(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  param_1[1] = puVar1;
  param_1[2] = 1;
  *param_1 = 1;
  *puVar1 = 1;
  return;
}

