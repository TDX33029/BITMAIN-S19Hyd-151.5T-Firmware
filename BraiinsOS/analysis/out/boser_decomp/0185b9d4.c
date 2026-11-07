// FUN_0185b9d4 @ 0185b9d4 size=44 calls_out=2 calls_in=3
// strings: 

void FUN_0185b9d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  return;
}

