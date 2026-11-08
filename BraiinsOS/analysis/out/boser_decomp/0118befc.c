// FUN_0118befc @ 0118befc size=64 calls_out=2 calls_in=1
// strings: 

void FUN_0118befc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0;
  return;
}

