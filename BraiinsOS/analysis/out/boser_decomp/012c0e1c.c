// FUN_012c0e1c @ 012c0e1c size=56 calls_out=2 calls_in=0
// strings: 

void FUN_012c0e1c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = &DAT_01ce2880;
  puVar1[1] = &DAT_01ce2890;
  return;
}

