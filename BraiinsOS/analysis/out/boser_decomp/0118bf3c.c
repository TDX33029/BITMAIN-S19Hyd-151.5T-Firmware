// FUN_0118bf3c @ 0118bf3c size=64 calls_out=2 calls_in=1
// strings: 

void FUN_0118bf3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = &DAT_0056d238;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}

