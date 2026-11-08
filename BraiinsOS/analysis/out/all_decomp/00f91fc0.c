// FUN_00f91fc0 @ 00f91fc0 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00f91fc0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar1 = &DAT_0188055c;
  puVar1[1] = &DAT_0188056c;
  return;
}

