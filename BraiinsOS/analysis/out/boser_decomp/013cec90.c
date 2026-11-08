// FUN_013cec90 @ 013cec90 size=44 calls_out=2 calls_in=14
// strings: 

void FUN_013cec90(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = 0;
  puVar1[1] = param_1;
  return;
}

