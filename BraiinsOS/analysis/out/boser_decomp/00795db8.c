// FUN_00795db8 @ 00795db8 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_00795db8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0;
  return;
}

