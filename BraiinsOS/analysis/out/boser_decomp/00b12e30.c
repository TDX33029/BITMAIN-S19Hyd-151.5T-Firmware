// FUN_00b12e30 @ 00b12e30 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00b12e30(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined1 *)(param_1 + 2) = param_2;
  *param_1 = puVar1;
  param_1[1] = &DAT_01c11a40;
  return;
}

